#include <iostream>
#include <string>
#include <clocale>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

using namespace std;

void exibesaldo(const Conta& conta ) {
    
    cout << "O saldo da conta �: R$" << conta.recuperarSaldo() << endl;
}

int main(){

    setlocale(LC_ALL, "");

    ContaCorrente umaConta("123456",Titular("Anna Giuglia", Cpf("123.456.789-10")));
    ContaPoupanca outraConta("789412", Titular("Rodrigo",Cpf("789.123.456-78")));
    
    outraConta.depositar(500);
    outraConta.sacar(200);

    umaConta.depositar(800);
    
    umaConta.transferePara(outraConta, 250);

    exibesaldo(outraConta);
    exibesaldo(umaConta);

    cout << "Numero de contas: " << Conta::retornanumerodecontas() << endl;

    Funcionario funcionario("Anna Moraco", Cpf("368.978.128-03"), 1250);

    return 0;
}