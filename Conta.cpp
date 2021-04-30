#include "Conta.hpp"
#include <iostream>

int Conta::numerodecontas = 0;

Conta::Conta(std::string numero, std::string nome, std::string cpf):
    numero(numero), nome(nome), cpf(cpf), saldo(0)
{
    verificaTamanhoNome();
    numerodecontas++;
}

Conta::~Conta() {
    numerodecontas--;
}

void Conta::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
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

void Conta::verificaTamanhoNome() {
    if (nome.size() < 5) {
        std::cout << "Nome muito curto." << std::endl;
        exit(1);
    }
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