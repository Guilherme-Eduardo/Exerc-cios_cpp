#include <iostream>

using namespace std;

int main()
{
   char cContinua = 'S';

   while( cContinua == 'S' || cContinua == 's')
   {
      int iNumero;
      cout << "Entre com o número:";
      cin >> iNumero;

      int iFatorial = 1;
      while( iNumero > 1)
      {
          iFatorial *= iNumero;
          --iNumero;
      }
      cout << "Fatorial:" << iFatorial <<endl;

      cout << "Outro número?";
      cin >> cContinua;
   }

   cout << "Game Over!" << endl;
   return 0;
}
