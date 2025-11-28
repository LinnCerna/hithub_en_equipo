#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,y,z;
    cin>>x>>y>>z;
    double n1=(2*x+y)/z;
    double n2=(y*y*y)-z;
    double numerador=n1 * n2;
    double parte1=(x+2*y+3*z)/(z-2*y-3*x);
    double denominador=parte1 + (x*x)+(z*z);
    double resultado=numerador/denominador;
    cout<<resultado<<endl;
    return 0;
}
