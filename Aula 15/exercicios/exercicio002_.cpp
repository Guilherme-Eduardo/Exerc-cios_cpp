//exercicio_002.cpp
#include "biblaureano.h"

using namespace std;

float fatorial( int numero);
float calculaN( int numero);

int main()
{
   int n;
   n = readInt("Entre com o valor N:");
   cout << "resultado = " << calculaN(n) << endl;
   cout << "fatorial  = " << fatorial(n) << endl;
   cout << "Game over!!!" << endl;
   return 0;
}

float calculaN( int numero )
{
   float expressao = 0;
   for( int inicio = 1; inicio <= numero; ++inicio)
   {
      expressao +=  fatorial(inicio)/fatorial(numero+inicio);
   }
   return expressao;
}

float fatorial( int numero )
{
   float resultado = 1;
   while(numero >0)
   {
      resultado *= numero;
      --numero;
   }
   return resultado;
}
