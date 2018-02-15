#pragma once
#include "ComponentFactory.h"
#include "Office18Button.h"
#include "Office18Textbox.h"
#include "Office18Panel.h"

class Office18Factory :
	public ComponentFactory
{
public:
	Office18Factory();
	~Office18Factory();

	// Inherited via ComponentFactory
	virtual Button * createButton() override;
	virtual Panel * createPanel() override;
	virtual Textbox * createTextbox() override;
};

