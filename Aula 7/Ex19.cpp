#include "biblaureano.h"

int main(){

    string caractere = readString("Digite um caractere qualquer: ");
    //enum VOGAIS{A,X,C};

   if(caractere == ("A", "E", "I", "O", "U", "a", "e", "i", "o", "u")){
    cout << "vogal" << endl;
   }
   else if(caractere == 0,9){
    cout << "Isso e um numero..." << endl;
   }
   else{
    cout << "Consoante" << endl;
   }

//("1","2","3","4","5","6","7","8","9","0")
return 0;
}
