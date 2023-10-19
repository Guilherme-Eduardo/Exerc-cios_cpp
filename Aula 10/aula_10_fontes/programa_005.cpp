//programa_005.cpp
#include "biblaureano.h"

int main(){
   int x, y, tamanho;

   const int TEMPO = 30;

   x = readInt("Valor de X:");
   y = readInt("Valor de Y:");
   tamanho = readInt("Tamanho:");
   desligaCursor(true);

   //int contadora = 0;
   while( true ) {
      int cor = randomico(1,7);
      int xInicial = x,
          yInicial = y;

      mudaCor((COR)cor);
      while( yInicial >= (y-tamanho)) {
          gotoXY( xInicial, yInicial);
          cout << "*";
          //subindo
          ++xInicial;
          --yInicial;
          espera(TEMPO);
      }
      while( yInicial <= y ){
          gotoXY( xInicial, yInicial);
          cout << "*";
          //descendo
          ++xInicial;
          ++yInicial;
          espera(TEMPO);
      }
      --xInicial;
      while( xInicial >= x){
         gotoXY( xInicial, yInicial);
         cout << "*";
         --xInicial;
         espera(TEMPO);
      }
      //quando o teclado for pressionado, termina o programa
      if( kbhit() )
         break;
   }
   cout << endl << "Game over!!" << endl;
}
