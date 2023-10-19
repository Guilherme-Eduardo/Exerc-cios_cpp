#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int iContador  = 1,
       iNumero    = 0,
       iPositivos = 0,
       iNegativos = 0,
       iImpares   = 0,
       iPares     = 0,
       iMaior     = 0,
       iMenor     = 0;

   cout << "Entre com um número:";
   cin >> iNumero;

   //primeiro número lido, sempre é o maior e o menor
   iMaior = iNumero;
   iMenor = iNumero;
   while( iContador <= 30)
   {
      if( iNumero > iMaior)
      {
          iMaior = iNumero;
      }
      if( iNumero < iMenor)
      {
          iMenor = iNumero;
      }
      if( iNumero % 2 == 0)
      {
          ++iPares;
      }
      else
      {
          ++iImpares;
      }
      if( iNumero >= 0)
      {
          ++iPositivos;
      }
      else
      {
          ++iNegativos;
      }
      ++iContador;
      cout << "Entre com um número:";
      cin >> iNumero;
   }

   cout << "Maior:" << iMaior << endl;
   cout << "Menor:" << iMenor << endl;
   cout << "Positivos:" << iPositivos << endl;
   cout << "Negativos:" << iNegativos << endl;
   cout << "Pares:" << iPares << endl;
   cout << "Ímpares:" << iImpares << endl;
   cout << "Game Over!" << endl;
   return 0;
}
