#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main(){

    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpf = "123.456.789.10";
    umaConta.nome = "Anna";
    umaConta.saldo = 1000;

    Conta outraConta;
    outraConta.saldo = 500;

    outraConta.depositar(300);
    umaConta.sacar(200);

    cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << outraConta.saldo << endl;

    return 0;
}