//exercicio_007
#include "biblaureano.h"

int geometrica( int t, int n, int q);
int eleva( int a, int b);

int main(){
   int t,n,q;
   t = readInt("Entre com o T:");
   n = readInt("Entre com o N:");
   q = readInt("Entre com o Q:");

   for( int i=1; i<=t;++i){
      cout << geometrica(i,n,q) << " ";
   }
   cout << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int geometrica( int t, int n, int q){
   return n * eleva(q,t-1);
}

int eleva( int a, int b){
   int resultado = 1;
   for( int i=0; i<b;++i){
      resultado *= a;
   }
   return resultado;
}
