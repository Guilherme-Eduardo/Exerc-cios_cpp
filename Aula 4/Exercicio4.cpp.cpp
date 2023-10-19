#include "biblaureano.h"
int main(){

  int monstroFeio, monstroMuitoFeio, monstroHorrivel, pontoMonstroFeio, pontoMonstroMuitoFeio, pontoMonstroHorrivel, bonus, score ;

  pontoMonstroFeio = 1 ;
  pontoMonstroMuitoFeio = 5 ;
  pontoMonstroHorrivel = 10 ;

  monstroFeio = readInt("Quantos Monstros Feios voce eliminou: ") ;
  monstroMuitoFeio = readInt("Quantos Monstros Muito Feios voce eliminou: ") ;
  monstroHorrivel = readInt("Quandos Monstros Horriveis voce eliminou: ") ;

  score = (monstroFeio * pontoMonstroFeio)  + (monstroMuitoFeio * pontoMonstroMuitoFeio) + (monstroHorrivel * pontoMonstroHorrivel) ;
  cout << "A sua pontuacao por eliminacao foi de: " << score << endl;

  bonus = score * 0.10 ;
  cout << "Sua pontuação com Bonus sera de: " << bonus << endl;



return 0;
}

