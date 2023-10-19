//exercicio_016
#include "biblaureano.h"

int mdc(int m, int n);

int main(){
   int m,n;
   m = readInt("Entre com o m:");
   n = readInt("Entre com o n:");

   cout << "Resultado:" << mdc(n,m) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int mdc(int m, int n){
   while( m % n != 0){
      int resto = m % n;
      m = n;
      n = resto;
   }
   return n;
}
