#include <iostream>

using namespace std;

int main()
{
    double precio = 3;
    double manejo = 0.65;
    int ventas = 16;
    double res;
    cout << "Sara Mendez vende biblias a razon de $3.00 cada una, mas $0.65 por estampillas" << endl;
    cout << "postales y manejo. Calcular sus ingresos de dos semanas en las que vendio 16 biblias." << endl;
    res = (precio + manejo)*ventas;
    cout << "vendio: $"<< res<< endl;


    return 0;
}
