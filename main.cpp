#include <iostream>
#include <string>
#include <clocale>
#include "Conta.hpp"

using namespace std;

void exibesaldo(const Conta& conta ) {
    Conta outraContaDesnecessaria("789412", "Rodrigo", "789.123.456-78");
    cout << "O saldo da conta �: R$" << conta.recuperarSaldo() << endl;
}

int main(){

    setlocale(LC_ALL, "");

    Conta umaConta("123456","Anna","123.456.789-10");
    Conta outraConta("789412","Rodrigo","789.123.456-78");
    
    outraConta.depositar(300);
    umaConta.sacar(200);

    exibesaldo(outraConta);

    cout << "Numero de contas: " << Conta::retornanumerodecontas();

    return 0;
}