#include <iostream>

using namespace std;
double sueldo;
int horas;
double res;
double total;
void calculo ()
{
    res = sueldo * horas;
    total = total + res;
}
int main()
{
    sueldo = 3.20;
    horas = 12;
    calculo();
    cout <<"Trabajo A: $"<<res << endl;
    sueldo = 4.10;
    horas = 10;
    calculo();
    cout <<"Trabajo B: $"<< res << endl;
    sueldo = 3.80;
    horas = 8;
    calculo();
    cout<<"Trabajo C: $"<<res<< endl;
    sueldo = 2.95;
    horas = 13;
    calculo();
    cout<<"Trabajo D: $"<< res<< endl;

    cout<<"Total de salario: $"<< total<< endl;


    return 1;
}
