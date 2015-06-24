/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GUI.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GUI::GUI ()
{
    addAndMakeVisible (fromEditor = new TextEditor ("new text editor"));
    fromEditor->setMultiLine (false);
    fromEditor->setReturnKeyStartsNewLine (false);
    fromEditor->setReadOnly (false);
    fromEditor->setScrollbarsShown (true);
    fromEditor->setCaretVisible (true);
    fromEditor->setPopupMenuEnabled (true);
    fromEditor->setText (TRANS("I AM NOT SCREAMING!"));

    addAndMakeVisible (toEditor = new TextEditor ("new text editor"));
    toEditor->setMultiLine (false);
    toEditor->setReturnKeyStartsNewLine (false);
    toEditor->setReadOnly (false);
    toEditor->setScrollbarsShown (true);
    toEditor->setCaretVisible (true);
    toEditor->setPopupMenuEnabled (true);
    toEditor->setText (String::empty);


    //[UserPreSize]
    toEditor->setText(fromEditor->getText().toLowerCase());
    fromEditor->addListener(this);
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GUI::~GUI()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    fromEditor = nullptr;
    toEditor = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GUI::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GUI::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    fromEditor->setBounds (8, 8, 288, 80);
    toEditor->setBounds (8, 104, 288, 80);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void GUI::textEditorTextChanged (TextEditor &editor)
{
    toEditor->setText(fromEditor->getText().toLowerCase());
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GUI" componentName="" parentClasses="public Component, public TextEditorListener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTEDITOR name="new text editor" id="d895cb4c6d42e0c6" memberName="fromEditor"
              virtualName="" explicitFocusOrder="0" pos="8 8 288 80" initialText="I AM NOT SCREAMING!"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="new text editor" id="9010435bbf230777" memberName="toEditor"
              virtualName="" explicitFocusOrder="0" pos="8 104 288 80" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
