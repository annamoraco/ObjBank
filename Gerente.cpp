#include "Gerente.hpp"
#include "Funcionario.hpp"
#include <string>
#include <iostream>

Gerente::Gerente(std::string nome, Cpf cpf, float salario) :
	Funcionario(nome, cpf, salario)
{
}

float Gerente::bonificacao() const {
	return recuperaSalario()*0.5;
}
