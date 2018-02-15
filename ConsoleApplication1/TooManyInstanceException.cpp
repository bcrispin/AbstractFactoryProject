#include "stdafx.h"
#include "TooManyInstanceException.h"


TooManyInstanceException::TooManyInstanceException(std::string factoryType)
{
	this->factoryType = factoryType;
}

TooManyInstanceException::~TooManyInstanceException()
{
}

const char * TooManyInstanceException::what() const throw()
{
	return this->factoryType.c_str();
}
