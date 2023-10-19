#include "biblaureano.h"
int main() {

float numeroFuncionario, horasTrabalhadas, valorHora, salario;

numeroFuncionario = readFloat("Informe o numero do funcionario que deseja saber suas informacoes: ");
horasTrabalhadas = readFloat("Informe o total de horas trabalhadas: ");
valorHora = readFloat("Informe o valor por hora do funcionario: ");
salario = (valorHora * horasTrabalhadas);



cout << " o valor do salario deste funcionario e de: " << salario << endl;

return 0;

}
