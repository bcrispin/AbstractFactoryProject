#pragma once
#include "Button.h"
class Office90Button :
	public Button
{
public:
	Office90Button();
	~Office90Button();

	// Inherited via Button
	virtual void show() override;
};

