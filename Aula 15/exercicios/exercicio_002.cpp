#include "biblaureano.h"

float fatorial( float f);

int main()
{
   float n = readFloat("Valor de n:");
   float resposta =0;
   for( int i = 1; i<=n;++i)
   {
      resposta += fatorial(i)/fatorial(i+1);
   }
   cout << "Resposta:" << resposta << endl;
   return 0;
}

float fatorial( float f)
{
    float retorno = 1;
    while( f > 1)
    {
       retorno *= f;
       --f;
    }
    return i;
}



