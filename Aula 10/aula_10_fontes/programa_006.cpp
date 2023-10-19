//programa_006.cpp
#include "biblaureano.h"

int main(){
    const string INIMIGO="|-|";
    const string AMIGO="_#_";

    int yInimigo; // linha do alvo
    int xInimigo; // coluna do alvo
    int yAmigo; //linha do aviao
    int xAmigo; //coluna do avi�o

    //posi��es iniciais das naves
    yInimigo = 5;
    xInimigo = randomico(1,80);

    yAmigo = 20;
    xAmigo = randomico(1,80);

    noecho(true);
    desligaCursor(true);

    //pega o tempo inicial para movimenta��o da nave
    TEMPO inicioInimigo = tempoInicio(); //tempo em milisegundos

    gotoXY(1,23);
    cout << "F-fogo | S-sai do programa";

    gotoXY(xInimigo,yInimigo);
    cout << INIMIGO << endl;
    gotoXY(xAmigo,yAmigo);
    cout << AMIGO << endl;

    while(true){

        if( kbhit() ){
            char tecla = getch();

            gotoXY(xAmigo,yAmigo); //limpa posi��o
            cout << "    ";

            switch(tecla){
               //n�o podemos ultrapassar os limites
               //da tela
               case K_RIGHT:{
                  xAmigo++;
                  if( xAmigo > 77 ){
                     xAmigo=1;
                  }
                  break;
               }
               case K_LEFT:{
                  xAmigo--;
                  if( xAmigo < 1 ){
                     xAmigo = 77;
                  }
                  break;
               }
               case 's':
               case 'S':{
                  return 1;
               }
               case 'f':
               case 'F':{
                  int xFogo; //posicao coluna tiro;
                  int yFogo; //posicao linha tiro;
                  xFogo = xAmigo+1; // o tiro sai do meio do aviao
                  yFogo = yAmigo-1; // o tiro sai uma linha acima do aviao

                  //loop para controlar o tiro que vai para o inimigo
                  while(true){
                     gotoXY(xInimigo,yInimigo);
                     cout << INIMIGO;

                     gotoXY(xFogo, yFogo);
                     cout << "+";

                     gotoXY(xAmigo,yAmigo);
                     cout << AMIGO;

                     //se tiro alcan�ou a mesma linha do inimigo
                     if( yFogo == yInimigo ){
                        break;
                     }
                     yFogo--;

                     espera(100);
                     //apaga o rastro do tiro e do inimigo
                     gotoXY(xFogo, yFogo+1);
                     cout << " " << endl;
                     gotoXY(xInimigo,yInimigo);
                     cout << "    ";

                     //inimigo continua se movimentando
                     if( tempoPassado( inicioInimigo ) > 20){
                        inicioInimigo = tempoInicio();
                        if( randomico()%2 == 0){
                           //n�o podemos ultrapassar os limites
                           //da tela
                           xInimigo++;
                           if( xInimigo > 77 ){
                              xInimigo=1;
                           }
                       }
                       else{
                          //n�o podemos ultrapassar os limites
                          //da tela
                          xInimigo--;
                          if( xInimigo < 1 ){
                             xInimigo = 77;
                          }
                       }
                    }
                 }
                 //verificando onde o tiro pegou
                 if( xFogo == (xInimigo+1) ){  // acertou no meio
                    cout << endl << "Parab�ns !! Detonou !!!";
                 }
                 else if( (xInimigo+2) == xFogo ){  // acertou asa direita
                    cout << endl << "Voc� s� arranhou a minha asa direita...";
                 }
                 else if( xFogo == xInimigo ){  //acertou asa esquerda
                    cout << endl << "Voc� s� arranhou a minha asa esquerda...";
                 }
                 else{
                    cout << endl << "Como voc� � ruim !!!";
                 }
                 espera(100);
               }
            }
            gotoXY(xAmigo,yAmigo);
            cout << AMIGO << endl;
        }


        //movimentacao da nave
        if( tempoPassado( inicioInimigo ) > 20){
            gotoXY(xInimigo,yInimigo); //limpa posi��o na tela
            cout << "   ";

            inicioInimigo = tempoInicio();//recome�ar contagem
            if( randomico()%2 == 0){
                //n�o podemos ultrapassar os limites
                //da tela
                xInimigo++;
                if( xInimigo > 77 ){
                    xInimigo=1;
                }
            }
            else{
                //n�o podemos ultrapassar os limites
                //da tela
                xInimigo--;
                if( xInimigo < 1 ){
                    xInimigo = 77;
                }
            }
            gotoXY(xInimigo,yInimigo);
            cout << INIMIGO << endl;

        }

    }
    cout << "Game over!!!" << endl;
    return 0;
}
