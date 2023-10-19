#include "biblaureano.h"
int main() {

    float perimetro, area, pi = 3.14, raio ;

    cout << "\n\tCALCULADORA DE CIRCUNFERENCIA E AREA DE UM CIRCULO" << endl;
    cout << "" << endl;

    raio = readFloat("Para calcular o valor de uma circunferencia, insira o valor do raio em metros: ") ;
    perimetro = raio * (pi * 2) ;
    cout << "O valor da circunferencia e: " << perimetro << " metros" << endl ;
    area = pi * (raio * raio) ;
    cout << "O valor da area desta circunferencia vale: " << area << " metros quadrados" << endl;

    return 0;
}
