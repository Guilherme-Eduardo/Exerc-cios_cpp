//exercicio_003.cpp
#include "biblaureano.h"

string extenso(string data);

int main(){
   string data = readString("entre com a data:");
   cout << data << endl;

   string resultado =  extenso(data);
   cout << "C:" << resultado << endl;
}

string extenso(string data){
   string dia = data.substr(0,2);
   string mes = data.substr(3,2);
   string ano = data.substr(6,4);
   string extenso = dia + " de ";
   if( mes == "01")
      extenso += "Janeiro ";
   else if( mes == "02")
      extenso += "Fevereiro ";
   else if( mes == "03")
      extenso += "Março ";
   else if( mes == "04")
      extenso += "Abril ";
   else if( mes == "05")
      extenso += "Maio ";
   else if( mes == "06")
      extenso += "Junho ";
   else if( mes == "07")
      extenso += "Julho ";
   else if( mes == "08")
      extenso += "Agosto ";
   else if( mes == "09")
      extenso += "Setembro ";
   else if( mes == "10")
      extenso += "Outubro ";
   else if( mes == "11")
      extenso += "Novembro ";
   else if( mes == "12")
      extenso += "Dezembro ";

   extenso += "de " + ano;
   return extenso;
}
