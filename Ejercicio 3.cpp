#include <iostream>

using namespace std;
int toneladas;
double precio;
double res;
void funcion()
{
    if (toneladas > 10)
    {
        precio = 35;
    }
    else
    {
        precio = 75;
    }
        res = toneladas * precio;
}
int main()
{
    cout <<"Los envios de los cargamentos serian "<< endl;
    toneladas = 12;
    funcion();
    cout <<"12 toneladas: $"<< res << endl;
    toneladas = 36;
    funcion();
    cout <<"36 toneladas: $"<< res << endl;
    toneladas = 8;
    funcion();
    cout <<"8 toneladas: $"<< res << endl;
    toneladas  = 100;
    funcion();
    cout <<"100 toneladas: $"<< res << endl;
    toneladas = 1260;
    funcion();
    cout <<"1260 toneladas: $"<< res << endl;



    return 0;
}
