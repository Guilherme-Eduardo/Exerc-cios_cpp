#include "biblaureano.h"
int main (){

    float qtdMoedaJogador, conversao;
    string moedaJogador, converter;

    qtdMoedaJogador = readInt("Informe a quantidade de moedas que voce possui: ");
    moedaJogador = readString("Informe o tipo da moeda do jogador [OURO, PRATA ou COBRE]: ");

    converter = readString("Para qual tipo de moeda voce desejar converter: ");

    cout << "" << endl;

    if(moedaJogador == converter){
       cout << "Voce ja possui esta moeda" << endl;
    }
        else{
            if(moedaJogador == "OURO" && converter == "PRATA"){
                    conversao = qtdMoedaJogador * 50.0;
                    cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                }


            else{
                if(moedaJogador == "OURO" && converter == "COBRE"){
                    conversao = qtdMoedaJogador * 2500.0;
                    cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                    }

            else{
                if(moedaJogador == "PRATA" && converter == "OURO"){
                        conversao = qtdMoedaJogador / 50;
                        cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                    }

                else{
                    if(moedaJogador == "PRATA" && converter == "COBRE"){
                            conversao = qtdMoedaJogador * 50.0;
                            cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                        }

                    else{
                        if(moedaJogador == "COBRE" && converter == "OURO"){
                                conversao = qtdMoedaJogador / 2500;
                                cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                            }

                        else {
                            if(moedaJogador == "COBRE" && converter == "PRATA"){
                                conversao = qtdMoedaJogador / 50;
                                cout << "O jogador ganhara " << conversao << " moedas de " << converter << endl;
                                }
                            }
                        }

                    }

                }

            }
            }

        return 0;




}
