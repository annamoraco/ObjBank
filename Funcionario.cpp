#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario) :
    Pessoa(nome, cpf), salario(salario)
{

}
