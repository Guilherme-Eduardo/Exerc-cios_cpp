#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long int iContador, iNumero, iSoma;

   // 1 + 3 + 9 + 27 + 81 + ....
   iNumero=1;
   iSoma = 0;
   iContador = 1;
   while( iContador <= 50)
   {
       iSoma += iNumero;
       iNumero *= 3;
       ++iContador;
   }
   cout << "Soma:" << iSoma << endl;

   //1/1 + 2/4 + 3/9 + 4/16 + 5/25 + ....
   float fSoma;
   iNumero = 1;
   fSoma = 0;
   iContador = 1;
   while( iContador <= 50)
   {
       fSoma += (float) (iNumero/pow(iNumero,2));
       ++iNumero;
       ++iContador;
   }
   cout << "Soma:" << fSoma << endl;

   //primeira solução, alternando o sinal no braço
   //1-2+3-4+5-6+...
   char cSinal = '+';
   iNumero = 1;
   iSoma = 0;
   iContador = 1;
   while( iContador <= 50)
   {
       if( cSinal == '+')
       {
           iSoma += iNumero;
           cSinal = '-';
       }
       else
       {
           iSoma -= iNumero;
           cSinal = '+';
       }
       ++iNumero;
       ++iContador;
   }
   cout << "Soma:" << iSoma << endl;

   //segunda solução, verificando se é par
   //1-2+3-4+5-6+...
   iNumero = 1;
   iSoma = 0;
   iContador = 1;
   while( iContador <= 50)
   {
       //ímpares soma
       if( iNumero % 2 != 0)
       {
           iSoma += iNumero;
       }
       else // pares subtrai
       {
           iSoma -= iNumero;
       }
       ++iNumero;
       ++iContador;
   }
   cout << "Soma:" << iSoma << endl;

   cout << "Game Over!" << endl;
   return 0;
}
