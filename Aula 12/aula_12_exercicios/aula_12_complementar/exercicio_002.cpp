#include <iostream>

using namespace std;

int main()
{
   int iNumero01, iNumero02;

   cout << "Entre com primeiro n�mero:" ;
   cin >> iNumero01;
   cout << "Entre com o segundo n�mero:";
   cin >> iNumero02;

   int iProdutorio = 1; //vari�vel acumuladora
   while( iNumero01 <= iNumero02)
   {
      iProdutorio *= iNumero01; //iProdutorio=iProdutorio*iNumero01
      ++iNumero01;
   }

   cout << "O produtorio �:" << iProdutorio << endl;
   cout << "Game Over!" << endl;
   return 0;
}
