#pragma once
#include <string>
#include "ComponentFactory.h"
class ComponentSingleton
{
public:
	static ComponentSingleton * getInstance();

	ComponentFactory* getFactory(std::string factoryType);

private:
	static ComponentSingleton * _instance;

	int office00Count;
	int office90Count;
	int office10Count;
	int office18Count;

	ComponentFactory * createOffice90Factory();
	ComponentFactory * createOffice00Factory();
	ComponentFactory * createOffice10Factory();
	ComponentFactory * createOffice18Factory();

	ComponentSingleton();
	~ComponentSingleton();
};

