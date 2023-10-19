//exercicio_020
#include "biblaureano.h"

void triangulo(int n);

int main(){
   int n;
   n = readInt("Entre com o N:");

   triangulo(n);
   cout << "Game Over!!!" << endl;
   return 0;
}

void triangulo(int n){
   for (int y= 1; y <= n; ++y){
      for (int x=0; x < n-y; ++x){
         cout << " ";
      }
      for(int x= 0; x < 2*y-1; ++x){
         cout << "*";
      }
      cout << endl;
   }
   return;
}
