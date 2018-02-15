// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ComponentFactory.h"
#include "Button.h"
#include "Textbox.h"
#include "Panel.h"
#include "ComponentSingleton.h"



int main()
{
	ComponentFactory * factory = ComponentSingleton::getInstance()->getFactory("Office00");
	Button* button = factory->createButton();
	Textbox* textbox = factory->createTextbox();
	button->show();
	factory = ComponentSingleton::getInstance()->getFactory("Office00");
	factory = ComponentSingleton::getInstance()->getFactory("Office00");
    return 0;
}

