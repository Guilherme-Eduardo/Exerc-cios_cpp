#include "biblaureano.h"
int main(){

    int random;
    int contador=0;


    do{
        random=randomico(1,50);
        cout << random << endl;

        if(random>=10 && random<=20){
            cout << "ESTE NUMERO E 10< " << random << " <20" << endl;
            contador++;
        }
        else {
            contador++;
        }

    } while (contador <=10 );



    return 0;
}
