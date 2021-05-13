#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
	Conta(numero, titular)
{

}

void ContaPoupanca::sacar(float valorASacar) {
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }
    float tarifaSaque = valorASacar * 0.03;
    float valorSaque = valorASacar + tarifaSaque;

    if (valorSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }
    saldo -= valorSaque;
}

/*
void ContaPoupanca::depositar(float valorADepositar) {
    saldo += valorADepositar;
}
*/

