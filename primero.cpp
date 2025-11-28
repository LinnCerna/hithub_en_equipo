#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, z;
    cin >> x >> y >> z;

    double numerador = pow(2*y + z, 2.8) - z;
    double denominador = x + y - (x / z);

    double resultado = numerador / denominador;

    cout << resultado;

  return 0;
}
