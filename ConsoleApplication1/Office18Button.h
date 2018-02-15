#pragma once
#include "Button.h"
class Office18Button :
	public Button
{
public:
	Office18Button();
	~Office18Button();

	// Inherited via Button
	virtual void show() override;
};

