//exercicio_005.cpp
#include "biblaureano.h"

int termoFibo( int qtd);

int main(){
   int quantosTermos = readInt("Qtd Termos:");
   cout << termoFibo(quantosTermos)<<endl;
}


int termoFibo( int qtd){
   int n1 = 1, n2 = 1, n3=1;
   for( int i = 1; i<qtd-1;  ++i){
      n3 = n1+n2;
      n1 = n2;
      n2 = n3;
   }
   return n3;
}
