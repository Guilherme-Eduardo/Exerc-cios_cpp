//exercicio_019
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
   for (int y= 0; y < n; ++y)   {
      for (int x= 0; x <= y; ++x){
         cout << "*";
      }
      cout << endl;
   }
   for (int y= n-1; y > 0; --y){
      for (int x = 0; x < y; ++x){
         cout << "*";
      }
      cout << endl;
   }
   return;
}
