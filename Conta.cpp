#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string numero, std::string nome, std::string cpf)
{
    this->numero = numero;
    this->nome = nome;
    this->cpf = cpf;
    this->saldo = 0;
}

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "N�o pode sacar valor negativo" << std::endl;
        return;
    }
    if (valorASacar > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
    saldo += valorADepositar;
}

// GETTER

float Conta::recuperarSaldo() const
{
    return saldo;
}

std::string Conta::recuperarNomeTitular() const {
    return nome;
}

std::string Conta::recuperarCpfTitular() const {
    return cpf;
}

// SETTER

void Conta::definirNomeTitular(std::string Nome) {
    nome = Nome;
}

void Conta::definirCpfTitular(std::string CPF) {
    cpf = CPF;
}