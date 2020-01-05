/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pfmproject0_1AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Pfmproject0_1AudioProcessorEditor (Pfmproject0_1AudioProcessor&);
    ~Pfmproject0_1AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pfmproject0_1AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pfmproject0_1AudioProcessorEditor)
};
