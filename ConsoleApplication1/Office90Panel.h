#pragma once
#include "Panel.h"
class Office90Panel :
	public Panel
{
public:
	Office90Panel();
	~Office90Panel();

	// Inherited via Panel
	virtual void show() override;
};

