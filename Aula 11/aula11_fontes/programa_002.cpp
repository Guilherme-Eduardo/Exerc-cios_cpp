// trabalhando com imagens ascii
// programa_002.cpp
#include "biblaureano.h"

int main(){
   //pega as imagens dos arquivos
   string n1 = retornaConteudoArquivo("programa_002_navio1.txt");
   string n2 = retornaConteudoArquivo("programa_002_navio2.txt");

   // 2 variáveis do tipo imagem, similar a ter 2 variáveis do tipo string
   Imagem navio1(n1,10,10);
   Imagem navio2(n2,70,10);
   navio1.setLimites(1,1,79,24); //limites máximos para movimentação da imagem
   navio2.setLimites(1,1,79,24); //limites máximos para movimentação da imagem

   //muda as cores da imagem
   navio1.mudaCor(RED, BLUE);
   navio2.mudaCor(GREEN);

   //verifica se uma imagem colidiu com outra
   while( !navio1.colisao(navio2)){
      navio1.imprime();
      navio2.imprime();
      espera(100);
      navio1.limpa();
      navio2.limpa();
      navio1.incrementaX();
      navio2.decrementaX();
   }

   //controlando as coordenadas das imagens com variáveis externas
   int x1 = 10;
   int x2 = 70;
   int y1 = 3;
   int y2 = 15;
   while( !navio2.colisao(navio1, x1, y1, x2, y2)){
      navio1.imprime(x1,y1);
      navio2.imprime(x2,y2);
      espera(100);
      navio1.limpa();
      navio2.limpa();
      x1+=5;
      x2-=5;
      ++y1;
      --y2;
   }
   cout << "Game Over" << endl;
   return 0;
}
