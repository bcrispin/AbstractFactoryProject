#pragma once
#include "Textbox.h"
class Office18Textbox :
	public Textbox
{
public:
	Office18Textbox();
	~Office18Textbox();

	// Inherited via Textbox
	virtual void show() override;
};

