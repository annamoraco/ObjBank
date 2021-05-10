#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string nome, Cpf cpf) : 
    nome(nome), cpf(cpf)
{
    verificaTamanhoNome();
}

void Titular::verificaTamanhoNome() {
    if (nome.size() < 5) {
        std::cout << "Nome muito curto." << std::endl;
        exit(1);
    }
}

std::string Titular::recuperarNomeTitular() const {
    return nome;
}

