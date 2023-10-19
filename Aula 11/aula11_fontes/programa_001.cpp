#include "biblaureano.h"

int main(){
   desligaCursor(true); //desligando o cursor
   //carregando as imagens
   string sFoguete = retornaConteudoArquivo("programa_001_foguete.txt");
   string sEstacao = retornaConteudoArquivo("programa_001_estacao.txt");
   string sCompleto = retornaConteudoArquivo("programa_001_completo.txt");

   mudaTamanhoTerminal(79,30);

   Imagem estacao(sEstacao,5,15);
   Imagem completo(sCompleto,5,15);
   Imagem foguete(sFoguete,5,15);

   foguete.setLimites(1,1,79,30); //ajusta os limites apenas para a imagem que se movimenta-r�

   completo.imprime(); //imprime a imagem na tela

   //faz a contagem de 10 at� 1
   int contador = 10;
   while( contador > 0){
       gotoXY(1,29);
       cout << contador << "...";
       contador--;
       espera(1000);
   }
   gotoXY(1,29);
   cout << "Fogo!!!";
   completo.limpa(); //limpa a imagem completa

   estacao.imprime(); //mostra novamente a estacao;

   while( foguete.getY() > 2){
      foguete.imprime(); //imprime o foguete na tela
      espera(200);
      foguete.limpa(); //limpa posi��o atual
      foguete.decrementaY(); //diminui a linha para pr�xima impress�o
   }

   return 0;
}
