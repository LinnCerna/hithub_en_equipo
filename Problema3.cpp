#include <bits/stdc++.h>
using namespace std;

int main() {

    double x, y, z;
    cin >> x >> y >> z;

    double potencia, divicion, result;

    potencia = 7 + pow(2 * x + y - z, 2 * x + y - z);
    divicion = 2 * x + y - z;
    result = potencia / divicion;
    std::cout << result << std::endl;


   return 0;
}
