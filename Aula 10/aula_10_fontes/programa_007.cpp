//lembrar de entrar em Settings -> Enviroment.. ->
//Terminal to launch console programns e colocar "gnome-terminal -t $TITLE -x"
//programa_007.cpp
#include "biblaureano.h"

int main (){
   int x=readInt("Valor de X:");
   int y=readInt("Valor de Y:");

   while(x&&y){
      mudaTamanhoTerminal(x,y);
      limparTela();
      //imprime as informações em todas as
      //novas coordenadas
      gotoXY(1,1);
      cout << "(1,1)";
      gotoXY(x-8,1);
      cout << "(" << numeroToString(x) << ",1)";
      gotoXY(1,y);
      cout << "(1," << numeroToString(y) << ")";
      gotoXY(x-8,y);
      cout << "(" << numeroToString(x) <<"," << numeroToString(y) << ")";
      //centraliza uma mensagem na tela
      string mensagem="Teste de tamanho! Mensagem centralizada! Dormindo 5 segundos....";
      gotoXY((x-mensagem.size())/2,y/2);
      cout << mensagem << endl;
      espera(5000);
      limparTela();
      x=readInt("Valor de X:");
      y=readInt("Valor de Y:");
   }
   return 0;
}
