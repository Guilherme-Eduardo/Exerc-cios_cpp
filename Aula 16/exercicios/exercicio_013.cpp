//exercicio_013
#include "biblaureano.h"

int maior( int a, int b, int c);

int main(){
   int a,b,c;
   a = readInt("Entre com o A:");
   b = readInt("Entre com o B:");
   c = readInt("Entre com o C:");

   cout << "Resultado:" << maior(a,b,c) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int maior( int a, int b, int c){
   if( a > b && a > c){
      return a;
   }
   else if( b > a && b > c){
      return b;
   }
   return c;
}
