#include "biblaureano.h"
int main(){
    int contador=0;

    do{
        string nomeAluno = readString ("INSIRA O NOME DA BENCAO: ");
        int nota1 = readInt("INFORME A NOTA 1: ");
        int nota2 = readInt("INFORME A NOTA 2: ");
        float media = ((nota1*1)+(nota2*2))/3.0;
        cout << "A MEDIA E DE " << media << endl;
        cout << endl;
        contador++;

    } while (contador <5);





    return 0;
}
