#include "biblaureano.h"
int main(){

    int idadeNadador = readInt("Mencione a idade do nadador: ");

    string categoria;

    if(idadeNadador >=5 && idadeNadador <=7){
        categoria = "Infatil A";
        cout << "O nadador esta adequado a categoria " << categoria << endl;
    }
    else if(idadeNadador >=8 && idadeNadador <=11){
            categoria = "Infantil B";
            cout << "O nadador esta adequado a categoria " << categoria << endl;
            }
    else if(idadeNadador >=12 && idadeNadador <=13){
            categoria = "Juvenil A";
            cout << "O nadador esta adequado a categoria " << categoria << endl;
        }
    else if( idadeNadador >=14 && idadeNadador <=17){
            categoria = "Juvenil B";
            cout << "O nadador esta adequado a categoria " << categoria << endl;
        }
    else if(idadeNadador >= 18){
            categoria = "Adultos";
            cout << "O nadador esta adequado a categoria " << categoria << endl;
    }
    else if(idadeNadador < 5){
            cout << "Nadador nao esta adequada a nenhuma categoria." << endl;
    }







return 0;
}
