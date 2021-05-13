#pragma once
#include "conta.hpp"

class ContaPoupanca final : public Conta
{

public:
	ContaPoupanca(std::string numero, Titular titular);
	void sacar(float valorASacar) override;
	//void depositar(float valorADepositar);
};

