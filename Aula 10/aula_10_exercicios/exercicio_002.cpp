#include "biblaureano.h"

int main(){
   int v = readInt("Qual o valor?");
   int y = readInt("Linha?");
   int x = readInt("Coluna?");

   gotoXY(x,y);
   cout << "*" << endl;
   int i=1;
   while(i<=v ){
      COR cor=(COR)randomico(1,8);
      mudaCor(cor);
      if( i%2 == 1){
         gotoXY(x,y-i);
         cout << "*" << endl;
         gotoXY(x+i,y);
         cout << "*" << endl;
         gotoXY(x-i,y);
         cout << "*" << endl;
         gotoXY(x,y+i);
         cout << "*" << endl;
      }
      else{
         gotoXY(x-i,y-i);
         cout << "*" << endl;
         gotoXY(x+i,y-i);
         cout << "*" << endl;
         gotoXY(x-i,y+i);
         cout << "*" << endl;
         gotoXY(x+i,y+i);
         cout << "*" << endl;
      }
      ++i;
      espera(1000);
   }

   return 0;
}
