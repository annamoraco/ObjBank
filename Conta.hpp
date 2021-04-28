#pragma once
#include <string>

struct Conta
{
    std::string numero;
    std::string cpf;
    std::string nome;
    float saldo;

    void sacar(float valorASacar);
    void depositar(float valorADepositar);
};
