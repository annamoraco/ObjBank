#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numero;
    string cpf;
    string nome;
    float saldo;
};

void sacar(Conta* conta, float valorASacar){
    if (valorASacar < 0){
        cout << "Não pode sacar valor negativo" << endl;
        return;
    }
    if (valorASacar > conta->saldo){
        cout << "Saldo insuficiente" << endl;
        return;
    }
    conta->saldo -= valorASacar;
}

void depositar(Conta* conta, float valorADepositar){
    conta->saldo += valorADepositar;
}

int main(){

    Conta umaConta;
    umaConta.numero = "123456";
    umaConta.cpf = "123.456.789.10";
    umaConta.nome = "Anna";
    umaConta.saldo = 1000;

    Conta outraConta;
    outraConta.saldo = 500;

    depositar(&outraConta, 200);

    cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << outraConta.saldo << endl;

    return 0;
}