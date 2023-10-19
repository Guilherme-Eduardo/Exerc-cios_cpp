#include "biblaureano.h"

int main(){

   int iContadora;

   //primeira solução
   iContadora = 0;
   while( iContadora <= 200){
      if( iContadora % 5 == 0){
          cout << iContadora << ",";
      }
      ++iContadora;
   }
   cout << endl;

   //segunda solução
   iContadora = 0;
   while( iContadora <= 200){
      cout << iContadora << ",";
      iContadora+=5; //pulando de 5 em 5
   }
   cout << endl;

   cout << "Game Over!!";
   return 0;
}
