#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(knob1);
    knob1.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    knob1.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    // Set additional properties for knob1 if needed

    addAndMakeVisible(knob2);
    knob2.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    knob2.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    // Set additional properties for knob2 if needed

    addAndMakeVisible(knob3);
    knob3.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    knob3.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    // Set additional properties for knob3 if needed
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Tiga Slider Knob", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // Set the position and size of the knobs within the component
    knob1.setBounds(50, 50, 100, 100);
    knob2.setBounds(200, 50, 100, 100);
    knob3.setBounds(350, 50, 100, 100);
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
