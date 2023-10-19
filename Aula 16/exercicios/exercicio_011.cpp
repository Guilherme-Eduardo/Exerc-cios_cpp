//exercicio_011
#include "biblaureano.h"

int maior( int a, int b);

int main(){
   int a,b;
   a = readInt("Entre com o A:");
   b = readInt("Entre com o B:");
   cout << "Resultado:" << maior(a,b) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int maior( int a, int b){
   if( a > b){
      return a;
   }
   return b;
}

