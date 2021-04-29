#pragma once
#include <string>

class Conta
{
private:
    std::string numero;
    std::string nome; 
    std::string cpf;
    float saldo;

public:
    Conta(std::string numero, std::string nome, std::string cpf);
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo() const;
    std::string recuperarNomeTitular() const;
    std::string recuperarCpfTitular() const;
    void definirNomeTitular(std::string Nome);
    void definirCpfTitular(std::string CPF);
};
