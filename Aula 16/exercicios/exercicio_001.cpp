//exercicio_001.cpp
#include "biblaureano.h"

bool primo(int n);

int main(){
   int n = readInt("Entre com o número:");

   if( primo(n)){
       cout << "primo" << primo <<  endl;
   }
   else cout << "não primo" << primo << endl;

   return 0;
}

bool primo(int n){
  for( int i=2; i<n/2; ++i){
     if( n%i == 0){
        return false;
     }
  }
  return true;
 }
