#pragma once
#include <string>
#include <iostream>

class Cpf
{
private:
	std::string cpf;

public:
	Cpf(std::string cpf);
	std::string recuperarCpfTitular() const;
};

