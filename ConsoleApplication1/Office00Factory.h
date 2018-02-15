#pragma once
#include "ComponentFactory.h"
#include "Office00Button.h"
#include "Office00Panel.h"
#include "Office00Textbox.h"

class Office00Factory :
	public ComponentFactory
{
public:
	Office00Factory();
	~Office00Factory();

	// Inherited via ComponentFactory
	virtual Button * createButton() override;
	virtual Panel * createPanel() override;
	virtual Textbox * createTextbox() override;
};

