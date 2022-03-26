#include <iostream>

using namespace std;
double res;
double desc;
double precio;
int cantidad;
double total;

void calculo()
{
    precio = cantidad * precio;
    res = precio - (precio * desc / 100);
    cout <<"Calculo con descuento: $" << res << endl;
    total = total + res;
}
int main()
{
    //Producto 1
    cantidad = 4;
    precio = 8.95;
    desc = 20;
    calculo();
    //Producto 2
    cantidad = 3;
    precio = 3.50;
    desc = 15;
    calculo();
    //Producto 3
    cantidad = 1;
    precio = 59.95;
    desc = 0;
    calculo();
    cout <<"Total: $"<< total << endl;
    total = total - (total * 2 /100);
    cout <<"Total con descuento: $"<< total << endl;

    return 0;
}
