#pragma once
#include "Panel.h"
class Office10Panel :
	public Panel
{
public:
	Office10Panel();
	~Office10Panel();

	// Inherited via Panel
	virtual void show() override;
};

