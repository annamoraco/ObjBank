#pragma once
#include <string>

class Conta
{
private:
    static int numerodecontas;

public:
    static int retornanumerodecontas();

private:
    std::string numero;
    std::string nome; 
    std::string cpf;
    float saldo;

public:
    Conta(std::string numero, std::string nome, std::string cpf); // construtor
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperarSaldo() const;
    std::string recuperarNomeTitular() const;
    std::string recuperarCpfTitular() const;
};
