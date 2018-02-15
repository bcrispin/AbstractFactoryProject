#pragma once
#include "Panel.h"
class Office18Panel :
	public Panel
{
public:
	Office18Panel();
	~Office18Panel();

	// Inherited via Panel
	virtual void show() override;
};

