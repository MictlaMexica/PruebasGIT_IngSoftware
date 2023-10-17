#include <iostream>
#include <string>

using namespace std;

void FuncionAngel()
{
    cout << "\n\tMensaje de Angel Ramirez Castro para GIT\nHola\n";
}

void FuncionJuanPa()
{
    string nombre;
    cout << "Por favor, introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "! Este es tu mensaje personalizado:\n";
}

int main()
{
    FuncionJuanPa();
    FuncionAngel();
    return 0;
}
