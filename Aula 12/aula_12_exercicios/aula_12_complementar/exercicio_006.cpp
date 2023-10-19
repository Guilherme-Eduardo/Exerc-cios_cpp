#include <iostream>

using namespace std;

int main()
{
   int iContador = 1;
   while( iContador <= 5)
   {
       string sNome;
       float fNota01, fNota02, fMedia;
       cout << "Entre o nome do aluno " << iContador << ":" ;
       cin >> sNome;
       cout << "Entre com a primeira nota:";
       cin >> fNota01;
       cout << "Entre com a segunda nota:";
       cin >> fNota02;

       fMedia = (fNota01+fNota02*2)/3;
       cout << "O aluno " << sNome << " ficou com média " << fMedia << endl;
       ++iContador;
   }

   cout << "Game Over!" << endl;
   return 0;
}
