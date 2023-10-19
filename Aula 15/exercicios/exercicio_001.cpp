#include "biblaureano.h"

int potencia( int numero, int expoente);

int main()
{
   cout << potencia(3,3) << endl;
}

int potencia( int numero, int expoente)
{
   int retorno=1;
   for(int i=0; i< expoente;++i)
   {
      retorno *= numero;
   }
   return retorno;
}
