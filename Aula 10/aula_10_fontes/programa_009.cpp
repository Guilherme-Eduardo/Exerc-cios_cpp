#include "biblaureano.h"

int main(){

   mudaTamanhoTerminal(120,35);
   cout << "Mudando a frente...."<<endl;
   int i=0;
   while(i<255){
      mudaCor255(i);
      cout << setw(3) << i;
      limpaEfeito();
      cout << " ";
      ++i;
   }
   limpaEfeito();
   cout << endl;

   cout << "Mudando o fundo...."<<endl;
   i=0;
   while(i<255){
      mudaCor255(WHITE,i);
      cout << setw(3) << i;
      limpaEfeito();
      cout << " ";
      ++i;
   }
   limpaEfeito();
   cout << endl;

   cout << "Mudando tudo...."<<endl;
   i=0;
   while(i<255){
      mudaCor255(i,i);
      cout << setw(3) << i;
      limpaEfeito();
      cout << " ";
      ++i;
   }
}

