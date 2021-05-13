#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
private:
    static int numerodecontas;

public:
    static int retornanumerodecontas();

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular); // construtor
    virtual ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo() const;
    virtual float taxaDeSaque() const = 0; // m�todo puramente virtual ou abstrato
};
