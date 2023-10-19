//exercicio_009
#include "biblaureano.h"

int aritmetica( int t, int n, int q);

int main(){
   int t,n,q;
   t = readInt("Entre com o T:");
   n = readInt("Entre com o N:");
   q = readInt("Entre com o Q:");

   for( int i=1; i<=t;++i){
      cout << aritmetica(i,n,q) << " ";
   }
   cout << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int aritmetica( int t, int n, int q){
   return (n + (t-1) * q);
}
