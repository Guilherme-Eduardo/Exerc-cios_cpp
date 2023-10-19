//exercicio_015
#include "biblaureano.h"

int menor3( int a, int b, int c);
int menor2( int a, int b);

int main(){
   int a,b,c;
   a = readInt("Entre com o a:");
   b = readInt("Entre com o b:");
   c = readInt("Entre com o c:");

   cout << "Resultado:" << menor3(a,b,c) << endl;
   cout << "Ou diretamente:" << menor2(menor2(a,b),c) << endl;
   cout << "Game Over!!!" << endl;
   return 0;
}

int menor3( int a, int b, int c){
   return menor2(menor2(a,b),c);
}

int menor2( int a, int b){
   if( a < b ){
      return a;
   }
   return b;
}
