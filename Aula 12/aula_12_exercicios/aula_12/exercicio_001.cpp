#include "biblaureano.h"

int main(){

   int iContadora, iTabuada;
   iContadora = 1;

   while( iContadora <= 10){
      iTabuada = 2 * iContadora;
      cout << "2 * " << iContadora << " = " << iTabuada << endl;
      ++iContadora;
   }

   cout << "Game Over!!";
   return 0;
}
