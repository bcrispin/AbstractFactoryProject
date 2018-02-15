#pragma once
#include "Textbox.h"
class Office00Textbox :
	public Textbox
{
public:
	Office00Textbox();
	~Office00Textbox();

	// Inherited via Textbox
	virtual void show() override;
};

