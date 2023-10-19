#include "biblaureano.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    desligaCursor(true);


    string sQ1 = retornaConteudoArquivo("T1.txt");
    string sQ2 = retornaConteudoArquivo ("T2.txt");
    string sQ3 = retornaConteudoArquivo("T3.txt");
    string sQ4 = retornaConteudoArquivo("T4.txt");
    string sQ5 = retornaConteudoArquivo("T5.txt");
    string sQ6 = retornaConteudoArquivo("T6.txt");
    string sQ7 = retornaConteudoArquivo("T7.txt");
    string sQ8 = retornaConteudoArquivo("T8.txt");

    mudaTamanhoTerminal(79,30);

    Imagem cena1(sQ1,5,1);
    Imagem cena2(sQ2,5,1);
    Imagem cena3(sQ3,5,1);
    Imagem cena4(sQ4,5,1);
    Imagem cena5(sQ5,20,1);
    Imagem cena6(sQ6,20,1);
    Imagem cena7(sQ7,20,1);
    Imagem cena8(sQ8,20,1);

    cena1.imprime();
    espera(3000);
    cena1.limpa();

    cena2.imprime();
    espera(3000);
    cena2.limpa();

    cena3.imprime();
    espera(3000);
    cena3.limpa();

    cena4.imprime();
    espera(3000);
    cena4.limpa();

    int contador =0;
    while(contador<=3){
    cena5.imprime();
    espera(1000);
    cena5.limpa();

    cena6.imprime();
    espera(1000);
    cena6.limpa();

    cena7.imprime();
    espera(1000);
    cena7.limpa();
    contador++;
    }

    cena8.imprime();
    espera(2000);
    cena8.limpa();

return 0;
}
