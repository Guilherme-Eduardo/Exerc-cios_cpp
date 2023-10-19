#include "biblaureano.h"

int main(){

   int iContadora, iQuadrado;

   //primeira solução
   iContadora = 1;
   while( iContadora <= 1000) {
      if( iContadora % 2 == 0) {
          //repare no casting (aula 06)
          iQuadrado = (int) pow(iContadora,2);
          cout << "Quadrado de " << iContadora
               << " = " << iQuadrado << endl;
      }
      ++iContadora;
   }

   //segunda solução
   iContadora = 0;
   while( iContadora <= 1000){
      //repare no casting (aula 06)
      iQuadrado = (int) pow(iContadora,2);
      cout << "Quadrado de " << iContadora
           << " = " << iQuadrado << endl;
      iContadora+=2; //pulando de 2 em 2
   }

   cout << "Game Over!!";
   return 0;
}
