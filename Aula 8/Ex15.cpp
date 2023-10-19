#include "biblaureano.h"
int main(){

    int valor1 = readInt("Informe um valor para a primeira variavel\n");
    int valor2 = readInt("Informe o segundo valor \n");
    int divisor1=1;
    int divisor2=1;
    int soma1 = 0;
    int soma2 = 0;


    while(valor1>=divisor1 && valor2>=divisor2){

        if(valor1%divisor1==0 && valor1!=divisor1){
          // cout << divisor1 << endl;;
            soma1+=divisor1;
            divisor1++;
        }

        else if(valor2%divisor2==0 && valor2!=divisor2){
           // cout << divisor2 << endl;
            soma2+=divisor2;
            divisor2++;
        }

        else{
            divisor1++;
            divisor2++;
        }
    }

        cout << " \nA soma dos divisores do numero " << valor1 << " e de: " << soma1 << endl;
        cout << " \nA soma dos divisores do numero " << valor2 << " e de: " << soma2 << endl;

        if(soma1==valor2 && soma2==valor1){
            cout << "Portanto, os numeros " << valor1 << " e "<< valor2 << " sao numeros amigos."<<endl;
        }
        else{
            cout << "Os numeros " << valor1 << " e " << valor2 << " nao sao numeros amigos." << endl;     }

      return 0;
    }




