#pragma once
#include <string>
#include "Funcionario.hpp"

class Gerente final : public Funcionario
{
public:
	Gerente(std::string nome, Cpf cpf, float salario);
	float bonificacao() const;
};

