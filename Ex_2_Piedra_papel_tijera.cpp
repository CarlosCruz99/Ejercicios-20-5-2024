#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a = 0, w = 0, l = 0, e = 0;
    for (int n = 0; n < 3; n++)
    {
        cout << "Elige: Piedra, papel o tijera? \n";
        cout << "1 = piedra \n";
        cout << "2 = papel \n";
        cout << "3 = tijera \n";
        do
        {
            cin >> a;
            if ((a < 1) || (a > 3))
            {
                cout << "Ingrese un numero valido. \n";
            }
        } while ((a < 1) || (a > 3));
        int b = rand() % 3;
        if (a == b)
        {
            cout << "Empate. \n";
            e = e + 1;
        }
        else if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2))
        {
            cout << "Ganaste. \n";
            w = w + 1;
        }
        else
        {
            cout << "Perdiste. \n";
            l = l + 1;
        }
    }
    cout << "Ganaste: " << w << " veces. \n";
    cout << "Perdiste: " << l << " veces. \n";
    cout << "Empataste: " << e << " veces. \n";
    return 0;
}