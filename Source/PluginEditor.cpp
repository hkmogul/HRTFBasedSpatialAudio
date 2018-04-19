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
	angleSlider.setRange(0, 345, 15); // TODO: skew to make it so 0 is at 12 oclock
	angleSlider.setSliderStyle(Slider::SliderStyle::Rotary);
	angleSlider.addListener(this);
	addAndMakeVisible(angleLabel);
	angleLabel.attachToComponent(&angleSlider, true);
	angleLabel.setText("Angle (degrees)", NotificationType::dontSendNotification);

	// Make sure that before the constructor has finished, you've set the
	// editor's size to whatever you need it to be.
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
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
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
		angleIndex = (int) angleSlider.getValue() / 15;
		// send notification to plugin processor to update filters
		processor.setAngleIndex(angleIndex);
	}
}