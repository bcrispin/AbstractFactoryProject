#include "stdafx.h"
#include "Office10Factory.h"


Office10Factory::Office10Factory()
{
}


Office10Factory::~Office10Factory()
{
}

Button * Office10Factory::createButton()
{
	return new Office10Button();
}

Panel * Office10Factory::createPanel()
{
	return new Office10Panel();
}

Textbox * Office10Factory::createTextbox()
{
	return new Office10Textbox();
}
