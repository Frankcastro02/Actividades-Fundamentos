#include <iostream>

using namespace std;
int main ()
{
    int n = 0 , i , primo = 1;
    cout << "Inserte un numero entero positivo";
    cin >> n;
    for (i = n-1; i >= 2 ; i--)
    {
        if (n % i==0)
        {
            cout << "No es primo";
            primo = 0;
            break;
        } 
    }

    if (primo ==1)
        {
            cout << "Es primo";
        }
    return 0;
}
//g++ If else numeros.cpp-0 primp
