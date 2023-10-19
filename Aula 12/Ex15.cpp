#include "biblaureano.h"
int main(){

    int valor1 = readInt("INFORME O PRIMEIRO VALOR: ");
    int valor2 = readInt ("INFORME O SEGUNDO VALOR: ");
    int somador1=0;
    int somador2=0;
    int contador1=1;
    int contador2=1;


    do{
        if(valor1%contador1==0){
            somador1+=contador1;
            //cout << somador1 << endl;
            contador1++;
        }
        else if(valor2%contador2==0){
            somador2+=contador2;
            //cout << somador2 << endl;
            contador2++;
        }
        else{
            contador1++;
            contador2++;
        }


    } while(valor1> contador1 && valor2>contador2);

    cout << "SOMA DOS DIVISORES DO VALOR 1: " << somador1 << endl;
    cout << "SOMA DOS DIVISORES DO VALOR 2: " << somador2 << endl;

    if(somador1==valor2 && somador2==valor1){
        cout << "PORTANTO, OS NUMEROS " << valor1 << " e " << valor2 << " sao numeros amigos" << endl;
    }
    else{
        cout << "NAO SAO NUMEROS AMIGOS!" << endl;

    }

    return 0;
}
