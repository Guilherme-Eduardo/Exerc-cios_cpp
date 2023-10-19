//programa_008.cpp
#include "biblaureano.h"

int main(){
   const string INIMIGO="|-|";
   const string AMIGO="_#_";

   int xTam = readInt("Informe X:");
   int yTam = readInt("Informe Y:");
   mudaTamanhoTerminal(xTam,yTam);

   int yInimigo; // linha do alvo
   int xInimigo; // coluna do alvo
   int yAmigo; //linha do aviao
   int xAmigo; //coluna do avião

   //posições iniciais das naves
   yInimigo = 5;
   xInimigo = randomico(1,xTam);

   yAmigo = yTam-4;
   xAmigo = randomico(1,xTam);

   noecho(true);
   desligaCursor(true);
   while(true)
   {
      gotoXY(xInimigo,yInimigo);
      cout << INIMIGO << endl;
      gotoXY(xAmigo,yAmigo);
      cout << AMIGO << endl;
      gotoXY(1,yTam-2);
      cout << "F-fogo | S-sai do programa";

      espera(10);

      if( kbhit() )
      {
         char tecla = getch();

         gotoXY(xAmigo,yAmigo);
         cout << "    ";

         switch(tecla)
         {
           case K_LEFT:
              xAmigo++;
              if( xAmigo > (xTam-3) )
              {
                 xAmigo=1;
              }
              break;
           case K_RIGHT:
              xAmigo--;
              if( xAmigo < 1 )
              {
                xAmigo = xTam-3;
              }
              break;
           case 's':
           case 'S':
              return 1;
           case 'f':
           case 'F':
           {
              int xFogo; //posicao coluna tiro;
              int yFogo; //posicao linha tiro;
              xFogo = xAmigo+1; // o tiro sai do meio do aviao
              yFogo = yAmigo-1; // o tiro sai uma linha acima do aviao

              //loop para controlar o tiro que vai para o inimigo
              while(true)
              {
                 gotoXY(xInimigo,yInimigo);
                 cout << INIMIGO;

                 gotoXY(xFogo, yFogo);
                 cout << "+";

                 gotoXY(xAmigo,yAmigo);
                 cout << AMIGO;

                 //se tiro alcançou a mesma linha do inimigo
                 if( yFogo == yInimigo || yFogo == 1)
                 {
                    break;
                 }
                 yFogo--;

                 espera(5);
                 //apaga o rastro do tiro e do inimigo
                 gotoXY(xFogo, yFogo+1);
                 cout << " " << endl;
                 gotoXY(xInimigo,yInimigo);
                 cout << "    ";

                 //inimigo continua se movimentando
                 if( randomico()%2 == 0)
                 {
                    xInimigo++;
                    if( xInimigo > (xTam-3) )
                    {
                       xInimigo=1;
                    }
                 }
                 else
                 {
                    xInimigo--;
                    if( xInimigo < 1 )
                    {
                       xInimigo = xTam-3;
                    }
                 }
                 if( randomico()%2 == 0){
                    yInimigo++;
                    if( yInimigo > 15 ){
                       yInimigo=15;
                    }
                 }
                 else{
                    yInimigo--;
                    if( yInimigo < 1 ){
                       yInimigo = 1;
                    }
                 }
              }
              //verificando onde o tiro pegou
              if( xFogo == (xInimigo+1) ) // acertou no meio
              {
                 cout << endl << "Parabéns !! Detonou !!!";
              }
              else if( (xInimigo+2) == xFogo ) // acertou asa direita
              {
                 cout << endl << "Você só arranhou a minha asa direita...";
              }
              else if( xFogo == (xInimigo) ) //acertou asa esquerda
              {
                 cout << endl << "Você só arranhou a minha asa esquerda...";
              }
              else
              {
                 cout << endl << "Como você é ruim !!!";
              }
              espera(100);
           }
         }
      }

      gotoXY(xInimigo,yInimigo);
      cout << "   ";

      //movimentacao da nave
      if( randomico()%2 == 0)
      {
         xInimigo++;
         if( xInimigo > (xTam-3) )
         {
            xInimigo=1;
         }
      }
      else
      {
         xInimigo--;
         if( xInimigo < 1 )
         {
            xInimigo = xTam-3;
         }
      }

      if( randomico()%2 == 0){
         yInimigo++;
         if( yInimigo > 15 ){
            yInimigo=15;
         }
      }
      else{
         yInimigo--;
         if( yInimigo < 1 ){
            yInimigo = 1;
         }
      }

   }
   cout << "Game over!!!" << endl;
   return 0;
}
