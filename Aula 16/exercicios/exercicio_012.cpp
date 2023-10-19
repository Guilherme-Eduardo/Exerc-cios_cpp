//exercicio_011
#include "biblaureano.h"

int menor( int a, int b);

int main(){
   int a,b;
   a = readInt("Entre com o A:");
   b = readInt("Entre com o B:");
   cout << "Resultado:" << menor(a,b) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int menor( int a, int b){
   if( a < b){
      return a;
   }
   return b;
}

