#pragma once
#include <exception>
#include <string>
class TooManyInstanceException :
	public std::exception
{
private:
	std::string factoryType;

public:
	TooManyInstanceException(std::string factoryType);
	~TooManyInstanceException();
	virtual const char* what() const throw();

};

