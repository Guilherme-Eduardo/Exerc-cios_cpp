#include "biblaureano.h"
int main (){

    int numeroAlunos = 1;

    while (numeroAlunos <=5){
        string aluno = readString("Nome aluno: ");
        int nota1 = readInt("Nota 1:");
        int nota2 = readInt("Nota 2: ") * 2;
        int media = (nota1 + nota2) / 3;
        cout << "Media e: " << media << endl;
        cout << "" << endl;
        numeroAlunos++;

    }


    return 0;
}
