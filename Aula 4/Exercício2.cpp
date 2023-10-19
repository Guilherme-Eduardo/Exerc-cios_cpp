#include "biblaureano.h"
int main(){
float peso1, peso2, peso3, peso4 ;
float nota1, nota2, nota3, nota4 ;
float media ;

    nota1 = 8.0 ;
    nota2 = 7.5 ;
    nota3 = 10.0 ;
    nota4 = 9.0 ;

    peso1 = 1.0 ;
    peso2 = 2.0 ;
    peso3 = 3.0 ;
    peso4 = 4.0 ;

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4))/ 10 ;
    cout << "A media do aluno e> " << media << endl ;
    return 0;
}
