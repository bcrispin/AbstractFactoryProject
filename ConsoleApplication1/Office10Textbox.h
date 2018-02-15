#pragma once
#include "Textbox.h"
class Office10Textbox :
	public Textbox
{
public:
	Office10Textbox();
	~Office10Textbox();

	// Inherited via Textbox
	virtual void show() override;
};

