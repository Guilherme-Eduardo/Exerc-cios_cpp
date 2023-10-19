#include "biblaureano.h"
int main(){

int formulaD,r,s,a,b,c;

    cout << "Segue a formula: D = R + S\n";
    cout << "                     -----\n";
    cout << "                       2   \n";
    cout << "" << endl;
    cout << "Informe os valores abaixo" << endl;

    a = readInt("Insira um valor inteiro para A: ");
    b = readInt("Insira um valor inteiro para B: ");
    c = readInt ("Insira um valor inteiro para C ");

    r = (a*b)+(a*a)+(b*a)+(b*b);
    s = (b*c)+(b*b)+(c*b)+(c*c);

    formulaD = (r+s)/2;

    cout << "O resultado da expressao e de: " << formulaD << endl;

return 0;



}
