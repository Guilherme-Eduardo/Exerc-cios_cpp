#include "biblaureano.h"

int main(){
   //configurando o ambiente
   desligaCursor(true);
   noecho(true);
   mudaTamanhoTerminal(79,30);

   //carregando as imagens
   string sSkull = retornaConteudoArquivo("programa_003_skull.txt");
   Imagem skull(sSkull,10,10);
   skull.setLimites(10,5,60,15); //ajusta os limites de movimenta��o
   skull.imprime();

   while(true){

      if(kbhit()){ //verifica se o teclado foi pressionado
         char tecla = getch();
         skull.limpa(); //limpa a imagem na posi��o atual
         if( tecla == K_UP ) skull.decrementaY(); //--y
         if( tecla == K_DOWN ) skull.incrementaY(); //++y
         if( tecla == K_LEFT ) skull.decrementaX(); //--x
         if( tecla == K_RIGHT ) skull.incrementaX(); //++x
         if( tecla == 'q') break;
         skull.imprime(); //imprime na nova posi��o
      }
   }
   return 0;
}
