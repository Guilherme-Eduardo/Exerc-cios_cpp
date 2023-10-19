#include "biblaureano.h"
int main(){

    int contador=0;
    int maior=1;
    int random;

    for(contador=0;contador<=50;++contador){

        random=randomico(1,200);
        cout << random << endl;

            if(random>=maior){
                maior=random;

            }
    }

    cout << "O MAIOR VALOR DE 1 A 200 E : " << maior << endl;



    return 0;
}
