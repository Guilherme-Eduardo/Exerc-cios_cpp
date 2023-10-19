#include <iostream>

using namespace std;

int main()
{
   int iNumero;

   iNumero = 1000;

   while( iNumero <= 1999 )
   {
       if( iNumero % 11 == 5)
       {
           cout << iNumero << ", ";
       }
       ++iNumero;
   }
   cout << endl;

   cout << "Game Over!" << endl;
   return 0;
}
