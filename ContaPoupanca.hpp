#pragma once
#include "conta.hpp"

class ContaPoupanca : public Conta
{

public:
	ContaPoupanca(std::string numero, Titular titular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
};

