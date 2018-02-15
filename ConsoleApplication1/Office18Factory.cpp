#include "stdafx.h"
#include "Office18Factory.h"


Office18Factory::Office18Factory()
{
}


Office18Factory::~Office18Factory()
{
}

Button * Office18Factory::createButton()
{
	return new Office18Button();
}

Panel * Office18Factory::createPanel()
{
	return new Office18Panel();
}

Textbox * Office18Factory::createTextbox()
{
	return new Office18Textbox();
}
