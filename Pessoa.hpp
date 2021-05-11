#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
protected:
	Cpf cpf;
	std::string nome;

public:
	Pessoa(std::string nome, Cpf cpf);

private:
	void verificaTamanhoNome();
};

