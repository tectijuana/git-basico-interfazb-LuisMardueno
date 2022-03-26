#include <iostream>
#include<math.h>
using namespace std;
double saldo = 0;
int opcion;
bool salida = false;
int S;
double A,B;
int main()
{
    cout <<"Sistema Bancario Presta pa'la orquesta "<< endl;
    cout <<"Consulta de saldo (1) ,Expension de cheques (2), Deposito(3), Balance (4)" << endl;
    cout <<"Selecione una opcion: "<< endl;
    do
    {
        cin >> opcion;
    switch(opcion)
    {
        case 1:
            cout <<"Su saldo disponible es: $"<<saldo << endl;
            break;
        case 2:
            cout <<"Saldo disponible es: $"<<saldo << endl;
            cout <<"Cantidad para expedir: "<< endl;
            cin >> A;
            if (A > saldo)
            {
                cout<<"No hay suficiente saldo para expedir"<< endl;
            }
            else {
                saldo = saldo - A;

                cout<<"Cheque por : $"<<A <<"Saldo restante: $"<<saldo<< endl;
            }
            break;
        case 3:
            cout<<"Cantidad del deposito : $"<< endl;
            cin >> B;
            saldo = saldo + B;
            cout<<"Saldo resultante: $"<< saldo << endl;
            break;
        case 4:
            cout <<"Impresion de balance:"<< endl;

            break;
        default:
        cout <<"Opcion invalida"<< endl;
        break;
    }
        cout <<"Desea continuar Si(1)/No(2)?"<< endl;
        cin >> S;
        if(S==2)
        {
            salida = true;
        }
    }while(salida == false);


 return 1;
}
