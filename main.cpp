#include <iostream>
#include <string>
#include <clocale>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"

using namespace std;

void exibesaldo(const Conta& conta ) {
    Conta outraContaDesnecessaria("789412", Titular("Rodrigo", Cpf("789.123.456-78")));
    cout << "O saldo da conta é: R$" << conta.recuperarSaldo() << endl;
}

int main(){

    setlocale(LC_ALL, "");

    Conta umaConta("123456",Titular("Anna Giuglia", Cpf("123.456.789-10")));
    ContaPoupanca outraConta("789412", Titular("Rodrigo",Cpf("789.123.456-78")));
    
    outraConta.depositar(500);
    outraConta.sacar(200);
    
    exibesaldo(outraConta);

    cout << "Numero de contas: " << Conta::retornanumerodecontas() << endl;

    Funcionario funcionario("Anna", Cpf("368.978.128-03"), 1250);

    return 0;
}