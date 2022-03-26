#include <iostream>

using namespace std;
 double precio;
    int cantidad;
    double res;

 void funcion(){
        if (cantidad < 30){
        precio = 6.95;
    }else {
        precio = 6;
    }
    res = cantidad * precio;
 }
int main()
{
    cout << "La escuela A compro 35 copias" << endl;
    cantidad = 35;
    funcion();
    cout << "Tiene que pagar: "<< res << endl;

    cout <<"La escuela B compro 12 copias" << endl;
    cantidad = 12;
    funcion();
    cout << "Tiene que pagar: "<< res << endl;

    cout <<"La escuela C compro 70 copias" << endl;
    cantidad = 70;
    funcion();
    cout << "Tiene que pagar: "<< res << endl;

    cout <<"La escuela D compro 20 copias"<< endl;
    cantidad =20;
    funcion();
    cout <<"Tiene que pagar: "<< res << endl;




    return 0;
}
