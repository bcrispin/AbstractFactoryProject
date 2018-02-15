#pragma once
#include "ComponentFactory.h"
#include "Office90Button.h"
#include "Office90Textbox.h"
#include "Office90Panel.h"

class Office90Factory :
	public ComponentFactory
{
public:
	Office90Factory();
	~Office90Factory();

	// Inherited via ComponentFactory
	virtual Button * createButton() override;
	virtual Panel * createPanel() override;
	virtual Textbox * createTextbox() override;
};

