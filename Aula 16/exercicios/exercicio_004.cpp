//exercicio_004.cpp
#include "biblaureano.h"

string retornaMes(string mes);

int main(){
   string mes = readString("entre com a mes:");
   cout << mes << endl;

   string resultado =  retornaMes(mes);
   cout << "C:" << resultado << endl;
}

string retornaMes(string mes){
   string extenso;
   if( mes == "01")
      extenso = "Janeiro ";
   else if( mes == "02")
      extenso = "Fevereiro ";
   else if( mes == "03")
      extenso = "Março ";
   else if( mes == "04")
      extenso = "Abril ";
   else if( mes == "05")
      extenso = "Maio ";
   else if( mes == "06")
      extenso = "Junho ";
   else if( mes == "07")
      extenso = "Julho ";
   else if( mes == "08")
      extenso = "Agosto ";
   else if( mes == "09")
      extenso = "Setembro ";
   else if( mes == "10")
      extenso = "Outubro ";
   else if( mes == "11")
      extenso = "Novembro ";
   else if( mes == "12")
      extenso = "Dezembro ";
   else
      return ("Mês inválido!");
   return extenso;
}
