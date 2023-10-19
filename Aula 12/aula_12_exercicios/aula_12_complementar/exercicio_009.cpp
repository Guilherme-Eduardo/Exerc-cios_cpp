#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int iNumero01, iNumero02, iAmigo01, iAmigo02;
   int iContador;

   cout << "Entre com o primeiro número:";
   cin >> iNumero01;
   cout << "Entre com o segundo número:";
   cin >> iNumero02;

   iAmigo01 = 0;
   iContador = 1;
   while( iContador < iNumero01 )
   {
       if( iNumero01 % iContador == 0)
       {
           iAmigo01 += iContador;
       }
       ++iContador;
   }
   cout << "Soma dos divisores de " << iNumero01 << " = " << iAmigo01 << endl;

   iAmigo02 = 0;
   iContador = 1;
   while( iContador < iNumero02 )
   {
       if( iNumero02 % iContador == 0)
       {
           iAmigo02 += iContador;
       }
       ++iContador;
   }
   cout << "Soma dos divisores de " << iNumero02 << " = " << iAmigo02 << endl;

   if( iNumero01 == iAmigo02 && iNumero02 == iAmigo01)
   {
       cout << "Números são amigos!" << endl;
   }
   else
   {
       cout << "Números não são amigos!" << endl;
   }
   return 0;
}
