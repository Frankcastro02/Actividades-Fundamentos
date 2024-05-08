#include <iostream>

using namespace std;
int main ()
{
    char opcion;
    
    cout << "Almuerzos ejecutivos Opciones" << "\n";

    while (opcion !='x')
    {
        cout << "Pollo Empanizado" << "\n" << "Delicioso pollo empanizado acompañado de ensalada fresca, cazamiento y 2 tortillas, incluye bebida." << "\n";

        cout << "Carne asada" << "\n" << "Deliciosa carne asada acompañado de ensalada fresca, cazamiento y 2 tortillas, incluye bebida." << "\n";

        cout << "Filete de Cerdo" << "\n" << "Delicioso Filete de Cerdo acompañado de ensalada fresca, cazamiento y 2 tortillas, incluye bebida." << "\n";

        cout << "Pollo a la plancha" << "\n" << "Delicioso pollo a la plancha acompañado de ensalada fresca, cazamiento y 2 tortillas, incluye bebida." << "\n";

        cout << "Costilla asada" << "\n" << "Deliciosa costilla asada acompañado de ensalada fresca, cazamiento y 2 tortillas, incluye bebida." << "\n";
        
        cin >> opcion;
    }
    return 0;
}