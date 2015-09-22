/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    //String fontFamilyForIOS("Hiragino Kaku Gothic ProN");
    //String fontFamilyForWindows("MS PMincho");
    String fontFamilyForOSX("Hiragino Kaku Gothic Pro W3");
    Font font(fontFamilyForOSX, 14, Font::plain);
    g.setFont(font);
    g.setColour (Colours::white);
    String text = L"過ぎ去りし日々のアナログとデジタルディレイのサウンドをシミュレートします。過去のディレイデバイスのレンジをシミュレートするために、‘Bits’パラメーターは原始的なアナログ - デジタル変換器のエフェクトをシミュレートします。10ビットだった頃を覚えていますか? これらのディレイを調整するとコーラスやより極端なエフェクトを得ることができます。Filterパラメーターはディレイ音のトーンをコントロールします。";
    int width = 200;
    int height = 300;
    int x = 0.5f * getWidth() - 0.5f * width;
    int y = 0.5f * getHeight() - 0.5f * height;
    Rectangle<int> bounds(x, y, width, height);
    g.drawFittedText(text, 
                     bounds, 
                     Justification::topLeft,
                     /* maximum number of lines */ std::numeric_limits<int>::max(),
                     0.9f);
    g.drawRect(bounds);

    x = 0;
    y = 5;
    width = getWidth();
    height = 20;
    bounds = Rectangle<int>(x, y, width, height);
    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Text that's cut off although there's adequate space for rendering the entire text:", bounds, Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
