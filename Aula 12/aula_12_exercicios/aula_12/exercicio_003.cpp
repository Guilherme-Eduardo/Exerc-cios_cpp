#include "biblaureano.h"

int main(){

   int iContadora, iSoma;

   //primeira solução
   iContadora = 1;
   iSoma = 0;
   while( iContadora <= 100) {
      if( iContadora % 2 == 0){
          iSoma += iContadora;
      }
      ++iContadora;
   }

   cout << "Soma:" << iSoma << endl;

   //segunda solução
   iContadora = 0;
   iSoma = 0;
   while( iContadora <= 100){
      iSoma += iContadora;
      iContadora+=2; //pulando de 2 em 2
   }
   cout << "Soma:" << iSoma << endl;

   cout << "Game Over!!";
   return 0;
}
