#include "stdafx.h"
#include "Office90Factory.h"


Office90Factory::Office90Factory()
{
}


Office90Factory::~Office90Factory()
{
}

Button * Office90Factory::createButton()
{
	return new Office90Button();
}

Panel * Office90Factory::createPanel()
{
	return new Office90Panel();
}

Textbox * Office90Factory::createTextbox()
{
	return new Office90Textbox();
}
