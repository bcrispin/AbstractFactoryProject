#pragma once
#include "Panel.h"
class Office00Panel :
	public Panel
{
public:
	Office00Panel();
	~Office00Panel();

	// Inherited via Panel
	virtual void show() override;
};

