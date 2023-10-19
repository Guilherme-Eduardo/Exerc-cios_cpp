#include <iostream>

using namespace std;

int main()
{
   int iContador, iContadorIntervalo, iContadorForaIntervalo;
   int iNumero;
   iContadorIntervalo = 0;
   iContadorForaIntervalo = 0;
   iContador = 1;
   while(iContador <=10)
   {
      cout << "Entre com o " << iContador << " número:";
      cin >> iNumero;

      if( iNumero >=10 && iNumero <=20)
      {
         ++iContadorIntervalo;
         cout << iNumero << " esta no intevalo [10,20]." << endl;
      }
      else
      {
         ++iContadorForaIntervalo;
      }
      ++iContador;
   }
   cout << iContadorIntervalo << " dentro do intervalo." << endl;
   cout << iContadorForaIntervalo << " fora do intervalo." << endl;

   cout << "Game Over!" << endl;
   return 0;
}
