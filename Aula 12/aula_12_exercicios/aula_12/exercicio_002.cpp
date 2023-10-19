#include "biblaureano.h"

int main(){

   int iAcumuladora, iContadora;
   iAcumuladora = 0;
   iContadora = 0;

   while( iContadora < 100){
      ++iContadora;
      iAcumuladora = iAcumuladora + iContadora;
   }

   cout << "Acumuladora = " << iAcumuladora << endl;
   cout << "Contadora   = " << iContadora << endl;

   cout << "Game Over!!";
   return 0;
}
