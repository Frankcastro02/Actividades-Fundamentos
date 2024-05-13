#include <iostream>

using namespace std;
int main ()
{
    char opcion, variable='x';
    do
    {
        cout << "Menu" << '\n';
        cout << "A Carne asada" << '\n';
        cout << "B pollo" << '\n';
        cout << "C cerdo" << '\n';
        cout << "Seleccione una opcion:" << '\n';
        cin >> opcion;
        cout << "Opcion selecionada" << opcion << '\n';
    }
    while(opcion != variable);
    
    return 0;
}
//g++ If else numeros.cpp-0 primp
