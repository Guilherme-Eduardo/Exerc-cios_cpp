#include "biblaureano.h"
int main () {

    string meuNome = "Guilherme Eduardo";
    string chuteMeuNome = readString("Qual e o meu nome?: ");

    if(meuNome == chuteMeuNome || chuteMeuNome == "Guilherme" ){
        cout << "Nome Correto" << endl;
        }

    else{
        if(meuNome != chuteMeuNome){
            cout << "Nome Incorreto" << endl;
            cout << "O nome correto e: " << meuNome << endl;
        }
    }



return 0;
}
