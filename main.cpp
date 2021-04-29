#include <iostream>
#include <string>
#include <clocale>
#include "Conta.hpp"

using namespace std;

void exibesaldo(const Conta& conta ) {
    cout << "O saldo da conta é: R$" << conta.recuperarSaldo() << endl;
}

int main(){

    setlocale(LC_ALL, "");

    Conta umaConta("123456","Anna","123.456.789-10");
    Conta outraConta("789412","Rodrigo","789.123.456-78");
    
    outraConta.depositar(300);
    umaConta.sacar(200);

    exibesaldo(outraConta);

    return 0;
}