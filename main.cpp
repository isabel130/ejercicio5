//
// Herramienta para ayudar a un trabajador a calcular su salario semanal.
// El algoritmo debe pedir cuántas horas ha trabajado y cuánto gana por hora.

#include <iostream>
using namespace std;

int main() {

    int horas, salario_hora, salario_semanal;

    cout << "Ingrese cuantas horas ha trabajado: ";
    cin >> horas;
    cout << "Ingrese cuanto gana por hora: ";
    cin >> salario_hora;

    salario_semanal = salario_hora * horas;

    cout << "Su salario semanal es " << salario_semanal << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.