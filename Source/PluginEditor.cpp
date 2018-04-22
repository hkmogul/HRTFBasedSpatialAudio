/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
HrtfbasedSpatialAudioAudioProcessorEditor::HrtfbasedSpatialAudioAudioProcessorEditor (HrtfbasedSpatialAudioAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
	addAndMakeVisible(angleSlider);
	angleSlider.setRange(-345, 0, 15); // TODO: 
	angleSlider.setSliderStyle(Slider::SliderStyle::Rotary);
	angleSlider.setTextValueSuffix(" * -1 degrees");
	Slider::RotaryParameters param;
	param.startAngleRadians = 0;
	param.endAngleRadians = 2 * 3.14159;
	param.stopAtEnd = false;
	angleSlider.setRotaryParameters(param);
	angleSlider.addListener(this);
	addAndMakeVisible(angleLabel);
	angleLabel.attachToComponent(&angleSlider, true);
	angleLabel.setText("Angle (degrees)", NotificationType::dontSendNotification);

	setSize(400, 300);
}

HrtfbasedSpatialAudioAudioProcessorEditor::~HrtfbasedSpatialAudioAudioProcessorEditor()
{
}

//==============================================================================
void HrtfbasedSpatialAudioAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
}

void HrtfbasedSpatialAudioAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
	angleSlider.setBoundsRelative(0.4, 0.5, 0.5, 0.5);
}

void HrtfbasedSpatialAudioAudioProcessorEditor::sliderValueChanged(Slider* slider)
{
	if (slider == &angleSlider)
	{
		angleIndex = -1*(int) angleSlider.getValue() / 15;
		// send notification to plugin processor to update filters
		processor.setAngleIndex(angleIndex);
	}
}