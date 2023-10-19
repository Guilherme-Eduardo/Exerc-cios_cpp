#include <iostream>

using namespace std;

int main()
{
   int iNumero01, iNumero02;

   cout << "Entre com primeiro número:" ;
   cin >> iNumero01;
   cout << "Entre com o segundo número:";
   cin >> iNumero02;

   int iProdutorio = 1; //variável acumuladora
   while( iNumero01 <= iNumero02)
   {
      iProdutorio *= iNumero01; //iProdutorio=iProdutorio*iNumero01
      ++iNumero01;
   }

   cout << "O produtorio é:" << iProdutorio << endl;
   cout << "Game Over!" << endl;
   return 0;
}
