#pragma once
#include "Cpf.hpp"
#include <iostream>
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
private:
	float salario;

public:
	Funcionario(std::string nome, Cpf cpf, float salario);
	std::string recuperaNome() const ;
	float recuperaSalario() const;
	virtual float bonificacao() const = 0;
};

