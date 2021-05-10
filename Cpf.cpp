#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string cpf) : cpf(cpf)
{

}

std::string Cpf::recuperarCpfTitular() const {
    return cpf;
}
