#include <iostream>
using namespace std;
int main()
{
  int numero, factorial = 1;
  cout << "Ingrese un numero positivo para encontrar su factorial: \n";
  cin >> numero;
  if (numero < 0)
  {
    cout << "Ingrese un numero positivo. \n";
  }
  else
  {
    cout << "El factorial del numero: " << numero << " es: \n";
    while (numero > 0)
    {
      factorial = factorial * numero;
      numero--;
    }
    cout << factorial;
  }
  return 0;
}