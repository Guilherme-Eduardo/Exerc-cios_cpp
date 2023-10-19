#include "biblaureano.h"
int main(){

    int fatorial = 1;
    int multi;

    char novamente = 's';
    while(novamente == 's'){

        int valor = readInt("Informe o valor para calcular o seu fatorial: ");

            while( valor >=1){

                multi = valor * (valor-1);
                valor--;
                fatorial *= multi;
                valor--;

                 if(valor == 1){
                cout << fatorial << endl;

                }
            }

            cout << fatorial << endl;
            novamente = readChar("Again: ");
            fatorial = 1; //zerar o fatorial novamente (Para ele voltar ao valor inicial)
    }

return 0;
}
