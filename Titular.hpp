#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
private:
	Cpf cpf;
	std::string nome;

public:
	Titular(std::string nome, Cpf cpf);

private:
	void verificaTamanhoNome();

public:
	std::string recuperarNomeTitular() const;
};

