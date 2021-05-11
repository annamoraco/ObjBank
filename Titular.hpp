#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Titular : public Pessoa
{
public:
	Titular(std::string nome, Cpf cpf);

	std::string recuperarNomeTitular();

};

