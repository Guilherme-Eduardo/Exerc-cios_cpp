//programa_004.cpp
#include "biblaureano.h"

int main(){
   TEMPO horaAntes; //quantidade de segundos
   horaAntes = tempoDecorrido(); //pega hora inicial em segundos

   int quantidadeInimigos = 10;

   limparTela();
   gotoXY(10,10);

   mudaCor(GREEN);
   cout <<"Pressione f para matar os inimigos..";
   limpaEfeito(); //limpa os efeitos de cores
   desligaCursor(true);
   noecho(true); //desliga impressão do que foi digitado
   while(true){
      if( kbhit() ){ //se foi pressionado o teclado
          char tecla = getch();//captura o que foi pressionado
          if( tecla == 'f'){
              quantidadeInimigos--;
              if( quantidadeInimigos == 0){
                 gotoXY(10,14);
                 mudaCor(CYAN);
                 cout << "Parabéns... você matou todos os inimigos" << endl;
                 limpaEfeito();
                 break; //encerra o programa
              }
          }
      }
      gotoXY(10,11);
      mudaCor(RED);
      cout << "Faltam alguns segundos para acabar o seu tempo:";
      cout << tempoDecorrido( horaAntes ) << "    " ;
      gotoXY(10,12);
      mudaCor(BLUE);
      cout << "Inimigos Restantes:";
      cout << quantidadeInimigos << "   ";
      limpaEfeito();

      //verifica quando tempo se passou
      if(tempoDecorrido( horaAntes ) > 10 && quantidadeInimigos >0){
         gotoXY(10,13);
         cout << "Passou 10 segundos e você não matou os inimigos!!!" << endl;
         cout << "Recomeçando a contagem..." << endl;
         quantidadeInimigos = 10;
         //pega nova hora inicial
         horaAntes = tempoDecorrido();
      }
   }

   cout << "Game over!!" << endl;
   return 0;
}
