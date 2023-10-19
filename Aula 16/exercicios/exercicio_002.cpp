//exercicio_002.cpp
#include "biblaureano.h"

using namespace std;

bool primo(int n);
int contaPrimo(int n);
int main(){
   int n = readInt("Entre com o número:");
   cout << contaPrimo(n) << endl;
   return 0;
}

int contaPrimo(int n){
   int contadora = 0;
   for( int i = 1; i<n;++i)   {
      if( primo(i)){
        ++contadora;
      }
   }
   return contadora;
}

bool primo(int n){
  for( int i=2; i<(n/2)+1; ++i){
     if( n%i == 0){
        return false;
     }
  }
  return true;
}
