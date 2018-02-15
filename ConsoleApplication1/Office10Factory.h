#pragma once
#include "ComponentFactory.h"
#include "Office10Button.h"
#include "Office10Textbox.h"
#include "Office10Panel.h"

class Office10Factory :
	public ComponentFactory
{
public:
	Office10Factory();
	~Office10Factory();

	// Inherited via ComponentFactory
	virtual Button * createButton() override;
	virtual Panel * createPanel() override;
	virtual Textbox * createTextbox() override;
};

