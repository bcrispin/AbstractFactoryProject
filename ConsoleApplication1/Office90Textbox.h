#pragma once
#include "Textbox.h"
class Office90Textbox :
	public Textbox
{
public:
	Office90Textbox();
	~Office90Textbox();

	// Inherited via Textbox
	virtual void show() override;
};

