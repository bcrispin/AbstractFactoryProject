#pragma once
#include "Button.h"
class Office00Button :
	public Button
{
public:
	Office00Button();
	~Office00Button();

	// Inherited via Button
	virtual void show() override;
};

