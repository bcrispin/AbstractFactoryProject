#pragma once
#include "Button.h"
#include "Textbox.h"
#include "Panel.h"
class ComponentFactory
{
public:

	ComponentFactory()
	{
	}

	~ComponentFactory()
	{
	}

	virtual Button* createButton() =0;
	virtual Panel* createPanel() = 0;
	virtual Textbox* createTextbox() = 0;
};

