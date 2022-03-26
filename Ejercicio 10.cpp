#include <iostream>

using namespace std;
double sueldo, impuesto;
int personas;


int main()
{
    cout<<"ingrese el sueldo: "<< endl;
    cin>>sueldo;
    cout<<"ingrese la cantidad de personas que dependen de usted" << endl;
    cin>>personas;
    impuesto = ((sueldo * 15 / 100)-10)*personas;
    cout<<"Impuesto: $"<<impuesto<<endl;


    return 1;
}
