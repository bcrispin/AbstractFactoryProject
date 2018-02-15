#pragma once
#include "Button.h"
class Office10Button :
	public Button
{
public:
	Office10Button();
	~Office10Button();

	// Inherited via Button
	virtual void show() override;
};

