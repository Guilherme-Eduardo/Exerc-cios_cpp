#include <iostream>

using namespace std;

int main()
{
   int iNumero, iTotalDivisoes, iContador;

   cout << "Entre com o n�mero:";
   cin >> iNumero;

   //primeira resposta
   iContador = 2;
   iTotalDivisoes = 0;

   while( iContador < iNumero )
   {
       //divis�o exata
       if( iNumero % iContador == 0 )
       {
           ++iTotalDivisoes;
       }
       ++iContador;
   }
   if( iTotalDivisoes < 2)
   {
       cout << "N�mero � primo!" << endl;
   }
   else
   {
       cout << "N�mero n�o � primo!" << endl;
   }

   //segunda resposta
   bool bPrimo = true;
   iContador = 2;
   while( iContador < iNumero )
   {
       //divis�o exata
       if( iNumero % iContador == 0 )
       {
           bPrimo = false;
       }
       ++iContador;
   }
   if( bPrimo )
   {
       cout << "N�mero � primo!" << endl;
   }
   else
   {
       cout << "N�mero n�o � primo!" << endl;
   }


   cout << "Game Over!" << endl;
   return 0;
}
