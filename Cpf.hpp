#pragma once
#include <string>
#include <iostream>

class Cpf
{
private:
	std::string cpf;

public:
	explicit Cpf(std::string cpf);
	std::string recuperarCpfTitular() const;
};

