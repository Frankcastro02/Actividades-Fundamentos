#include <iostream>

using namespace std;
int main ()
{
    int n = 0 , i = 0;
    cout << "Inserte un numero entero positivo";
    cin >> n;
    for (i = 0; i < n; i = i+2)
    {
        cout << i << '\n';
    }
}