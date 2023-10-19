#include "biblaureano.h"
int main(){

    cout << "\n\tCondicao de existencia de um triangulo\n";
    cout << "" << endl;

    int ladoA = readInt("Informe o valor do lado A: ");
    int ladoB = readInt("Informe o valor do lado B: ");
    int ladoC = readInt("Informe o valor do lado C: ");

    if((ladoB - ladoC) < ladoA && ladoA <(ladoB + ladoC)){
        if((ladoA - ladoC) < ladoB && ladoB < (ladoA + ladoC)){
            if((ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB)){
                if(ladoA > 1 && ladoB > 1 && ladoC > 1){
                    if(ladoA == ladoB || ladoC == ladoA || ladoC == ladoA ){

                        }
                     }
                }
            }
        }
        else{
            cout << "Valores invalidos para a formacao de um triangulo" << endl;
            return 0;
        }

     if(ladoA == ladoB || ladoC == ladoA || ladoB == ladoC ){
            cout << "com os valores de " << ladoA << " , " << ladoB << " e " << ladoC << " formaremos o triangulo Isosceles" << endl;
        }

    else if(ladoA == ladoB && ladoA == ladoC){
        cout << "com os valores de " << ladoA << " , " << ladoB << " e " << ladoC << " formaremos o triangulo equilatero" << endl;
        }
        else if(ladoA != ladoB && ladoC != ladoA || ladoC != ladoB){
        cout << "com os valores de " << ladoA << " , " << ladoB << " e " << ladoC << " formaremos o triangulo escaleno" << endl;
        }



    return 0;
}











