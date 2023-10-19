//programa_003.cpp
#include "biblaureano.h"

int main(){
   int linha,coluna;
   linha = 1;
   coluna = 1;
   bool ligado = true;
   bool cursor = true;
   desligaCursor(cursor); //liga/desliga o cursor
   while(true){
       gotoXY(coluna,linha);
       if( ligado ){
          cout << "*";
       }
       else{
          cout << " ";
       }

       char tecla;
       if( verificaKB(tecla) ){
           if( tecla == 'Q' || tecla == 'q'){ // finaliza o programa
              break;
           }
           else if(  tecla == K_LEFT){
              coluna--;
              if( coluna < 1){
                 coluna = 1;
              }
           }
           else if( tecla == K_RIGHT ){
              coluna++;
              if( coluna > 79){
                 coluna = 79;
              }
           }
           else if( tecla == K_UP){
              linha--;
              if( linha < 1){
                linha = 1;
              }
           }
           else if( tecla == K_DOWN){
              linha++;
              if( linha > 24){
                linha = 24;
              }
           }
           else if( tecla == 'L' || tecla == 'l'){
               //se ligado = false, ent�o ligado recebe true e o programa volta a desenhar na tela
               //se ligado = true, ent�o ligado recebe false e o programa apaga os
               //  caracteres j� desenhados
               ligado = !ligado; //simula��o interruptor
           }
           else if( tecla == 'C' || tecla == 'c'){
              cursor = !cursor;
              desligaCursor(cursor); //liga/desliga o cursor
           }
       }
   }
   return 0;
}
