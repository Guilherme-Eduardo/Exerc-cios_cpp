#include "biblaureano.h"

int main() {

    int segundos = readFloat("Insira os segundos: ");
    int minutos = segundos / 60;
    int horas = minutos / 60;

    cout << "horas: " << horas << endl;
    cout << "minutos: " << minutos << endl;
    cout << "segundos: " << segundos << endl;

    return 0;
 }
