#include "stdafx.h"
#include "ComponentSingleton.h"
#include "Office90Factory.h"
#include "Office00Factory.h"
#include "Office10Factory.h"
#include "Office18Factory.h"
#include "TooManyInstanceException.h"

ComponentSingleton * ComponentSingleton::_instance;

ComponentSingleton * ComponentSingleton::getInstance()
{
	if (!_instance) {
		_instance = new ComponentSingleton();
	}
	return _instance;
}

ComponentFactory * ComponentSingleton::getFactory(std::string factoryType)
{
	if (factoryType == "Office90") {
		return createOffice90Factory();
	}
	else if (factoryType == "Office00") {
		return createOffice00Factory();
	}
	else if (factoryType == "Office10") {
		return createOffice10Factory();
	}
	else if (factoryType == "Office18") {
		return createOffice18Factory();
	}
}

ComponentFactory * ComponentSingleton::createOffice90Factory()
{
	if (office90Count < 2) {
		office90Count++;
		return new Office90Factory();
	}
	throw TooManyInstanceException("Office90");
}

ComponentFactory * ComponentSingleton::createOffice00Factory()
{
	if (office00Count < 2) {
		office00Count++;
		return new Office00Factory();
	}
	throw TooManyInstanceException("Office00");
}

ComponentFactory * ComponentSingleton::createOffice10Factory()
{
	if (office10Count < 2) {
		office10Count++;
		return new Office10Factory();
	}
	throw TooManyInstanceException("Office10");
}

ComponentFactory * ComponentSingleton::createOffice18Factory()
{
	if (office18Count < 2) {
		office18Count++;
		return new Office18Factory();
	}
	throw TooManyInstanceException("Office18");
}

ComponentSingleton::ComponentSingleton()
{
	office90Count = 0;
	office00Count = 0;
	office10Count = 0;
	office18Count = 0;
}


ComponentSingleton::~ComponentSingleton()
{
}
