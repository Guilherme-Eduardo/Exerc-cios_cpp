#include "biblaureano.h"

int main()
{
   string nave01 = retornaConteudoArquivo("exercicio_004_nave1.txt");
   string nave02 = retornaConteudoArquivo("exercicio_004_nave2.txt");
   string nave03 = retornaConteudoArquivo("exercicio_004_nave3.txt");
   mudaTamanhoTerminal(79,30);
   int contador = 10;
   imprimeSprite(nave01, 5, 15);
   while( contador > 0){
       gotoXY(1,29);
       cout << contador << "...";
       contador--;
       espera(1000);
   }
   gotoXY(1,29);
   cout << "Fogo!!!";

   limpaArea(5,15,15,28);
   imprimeSprite(nave03,5,15);
   int y = 15;
   while( y > 0){
      limpaArea(5,y,15,y+13);
      imprimeSprite(nave02,5,y);
      --y;
      espera(200);
   }

   return 0;
}
