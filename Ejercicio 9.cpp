#include <iostream>

using namespace std;
double sueldo;
int horas, opcion,N,E;
double res;
double total;

int main()
{
    for(int i = 0; i < 6; i++)
    {
        cout<<"Dia: "<<i<< endl;
     cout<<"Ingrese su sueldo: "<< endl;
    cin >> sueldo;
    cout<<"Ingrese la cantidad de horas trabajadas: "<< endl;
    cin >> horas;
    cout<<"Fueron ordinarias(1)/extra(2)?"<< endl;
    cin >> opcion;
    if (opcion > 1)
    {
        E = E + horas;
        res = sueldo * horas;
    total = total + res;
    }
    else
    {
        N = N + horas;
         res = sueldo * horas;
    total = total + res;
    }


    }
    cout<<"Total de salario: $"<< total<< endl;
    cout<<"Horas normales: "<<N << endl;
    cout<<"Horas extraordinarias: "<<E <<endl;


    return 1;
}
