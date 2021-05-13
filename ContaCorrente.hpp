#pragma once
#include "conta.hpp"

class ContaCorrente : public Conta
{
public:
	ContaCorrente(std::string numero, Titular titular); // construtor
	float taxaDeSaque() const override;
	void transferePara(Conta& conta, float valor);
};

