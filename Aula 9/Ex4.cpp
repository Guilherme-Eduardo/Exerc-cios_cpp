#include "biblaureano.h"
int main(){

    float chico = 1.5;
    float ze = 1.1;
    int ano = 0;

    while (chico >= ze){
        chico +=0.02;
        ze += 0.03;

        ano++;
        //cout << ano << endl;
    }
    cout << "Sera necessario "<< ano << " anos para Ze alcanar o chico " << endl;


    return 0;
}
