#include "biblaureano.h"
int main () {

    string codigoPeca1, codigoPeca2;
    float valorPeca1, valorPeca2, qtdPeca1, qtdPeca2, valorTotal;

    cout << "Informa a primeira peca a ser comprada \n" ;
    cout << "" << endl;
    codigoPeca1 = readString("Digite o codigo da primeira peca: ");
    valorPeca1 = readInt("Digite o valor da peca: ");
    qtdPeca1 = readInt("Digite a quantidade a ser comprada: ");
    cout << "" << endl;

    cout << "informe a segunda peca a ser comprada \n";
    codigoPeca2 = readString ("Digite o codigo da peca: ");
    valorPeca2 = readInt ("Digite o valor da peca: ");
    qtdPeca2 = readInt ("Digite a quantidade a ser comprada: ");
    cout << "" << endl;

    float valorIpi = readFloat ("informe o valor do IPI: ");
    float ipi = (valorIpi /100) +1;

    valorTotal = (valorPeca1*qtdPeca1) + (valorPeca2*qtdPeca2) + ipi;

    cout << "Primeira peca\n";
    cout << "Descricao: " << codigoPeca1 << endl;
    cout << "valor unitario: " << valorPeca1 << endl;
    cout << "Quantidade adquirida: " << qtdPeca1 << endl;
    cout << "" << endl;

    cout << "Segunda peca \n";
    cout << "Descricao: " << codigoPeca2 << endl;
    cout << "valor unitario: " << valorPeca2 << endl;
    cout << "Quantidade adquirida: " << qtdPeca2 << endl;
    cout << "Valor total da compra e de: " << valorTotal << endl;

    return 0;


}
