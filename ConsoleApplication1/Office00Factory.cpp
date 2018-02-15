#include "stdafx.h"
#include "Office00Factory.h"


Office00Factory::Office00Factory()
{
}


Office00Factory::~Office00Factory()
{
}

Button * Office00Factory::createButton()
{
	return new Office00Button();
}

Panel * Office00Factory::createPanel()
{
	return new Office00Panel();
}

Textbox * Office00Factory::createTextbox()
{
	return new Office00Textbox();
}
