/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "leftIR.h"
#include "rightIR.h"

//==============================================================================
HrtfbasedSpatialAudioAudioProcessor::HrtfbasedSpatialAudioAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::mono(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       )
#endif
{
}

HrtfbasedSpatialAudioAudioProcessor::~HrtfbasedSpatialAudioAudioProcessor()
{
}

//==============================================================================
const String HrtfbasedSpatialAudioAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool HrtfbasedSpatialAudioAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool HrtfbasedSpatialAudioAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool HrtfbasedSpatialAudioAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double HrtfbasedSpatialAudioAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int HrtfbasedSpatialAudioAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int HrtfbasedSpatialAudioAudioProcessor::getCurrentProgram()
{
    return 0;
}

void HrtfbasedSpatialAudioAudioProcessor::setCurrentProgram (int index)
{
}

const String HrtfbasedSpatialAudioAudioProcessor::getProgramName (int index)
{
    return {};
}

void HrtfbasedSpatialAudioAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void HrtfbasedSpatialAudioAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
	dsp::ProcessSpec spec;
	spec.maximumBlockSize = samplesPerBlock;
	spec.sampleRate = sampleRate;
	spec.numChannels = 1;
	leftFilter.prepare(spec);
	rightFilter.prepare(spec);
	setAngleIndex(0);
}

void HrtfbasedSpatialAudioAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool HrtfbasedSpatialAudioAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void HrtfbasedSpatialAudioAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
    ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // Copy (mono) input data to all channels so we can do in-place processing
	auto* inputData = buffer.getReadPointer(0);
	for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
		buffer.copyFrom(i, 0, inputData, buffer.getNumSamples());

    for (int channel = 0; channel < totalNumOutputChannels; ++channel)
    {
        auto* channelData = buffer.getWritePointer (channel);
		// assume L = 0 and R = 1?
		if (channel == 0)
		{
			dsp::AudioBlock<float> lBufBlock = dsp::AudioBlock<float>(&channelData, 1, buffer.getNumSamples());
			dsp::ProcessContextReplacing<float> lContext(lBufBlock);
			leftFilter.process(lContext);
		}
		else
		{
			dsp::AudioBlock<float> rBufBlock = dsp::AudioBlock<float>(&channelData, 1, buffer.getNumSamples());
			dsp::ProcessContextReplacing<float> rContext(rBufBlock);
			rightFilter.process(rContext);
		}
    }
}

//==============================================================================
bool HrtfbasedSpatialAudioAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* HrtfbasedSpatialAudioAudioProcessor::createEditor()
{
    return new HrtfbasedSpatialAudioAudioProcessorEditor (*this);
}

//==============================================================================
void HrtfbasedSpatialAudioAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void HrtfbasedSpatialAudioAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new HrtfbasedSpatialAudioAudioProcessor();
}

void HrtfbasedSpatialAudioAudioProcessor::setAngleIndex(int index)
{
	*(leftFilter.getProcessor().coefficients) = dsp::FIR::Coefficients<float>(leftIR[index], L_IRLEN);
	*(rightFilter.getProcessor().coefficients) = dsp::FIR::Coefficients<float>(rightIR[index], R_IRLEN);

}