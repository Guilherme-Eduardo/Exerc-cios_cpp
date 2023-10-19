#include <iostream>

using namespace std;

int main()
{
   int iNumero, iTotalDivisoes, iContador;

   cout << "Entre com o número:";
   cin >> iNumero;

   //primeira resposta
   iContador = 2;
   iTotalDivisoes = 0;

   while( iContador < iNumero )
   {
       //divisão exata
       if( iNumero % iContador == 0 )
       {
           ++iTotalDivisoes;
       }
       ++iContador;
   }
   if( iTotalDivisoes < 2)
   {
       cout << "Número é primo!" << endl;
   }
   else
   {
       cout << "Número não é primo!" << endl;
   }

   //segunda resposta
   bool bPrimo = true;
   iContador = 2;
   while( iContador < iNumero )
   {
       //divisão exata
       if( iNumero % iContador == 0 )
       {
           bPrimo = false;
       }
       ++iContador;
   }
   if( bPrimo )
   {
       cout << "Número é primo!" << endl;
   }
   else
   {
       cout << "Número não é primo!" << endl;
   }


   cout << "Game Over!" << endl;
   return 0;
}
