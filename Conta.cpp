#include "Conta.hpp"
#include <iostream>

int Conta::numerodecontas = 0;

Conta::Conta(std::string numero, Titular titular):
    numero(numero), titular(titular), saldo(0)
{
    numerodecontas++;
}

Conta::~Conta() {
    numerodecontas--;
}

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "N�o pode sacar valor negativo" << std::endl;
        return;
    }
    float tarifaSaque = valorASacar * 0.05;
    float valorSaque = valorASacar + tarifaSaque;

    if (valorSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorSaque;
}

void Conta::depositar(float valorADepositar) {
    saldo += valorADepositar;
}

// GETTER

float Conta::recuperarSaldo() const
{
    return saldo;
}


int Conta::retornanumerodecontas() {
    return numerodecontas;
}

/* // SETTER

void Conta::definirNomeTitular(std::string Nome) {
    nome = Nome;
}

void Conta::definirCpfTitular(std::string CPF) {
    cpf = CPF;
}
*/