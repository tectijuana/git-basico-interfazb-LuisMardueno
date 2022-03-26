#include <iostream>

using namespace std;

int main()
{
    int poblacion = 2400;
    int incremento = 8;
    for (int i = 0; i <= 9; i++)
    {
        poblacion = poblacion + (poblacion * incremento / 100);
    }

    cout <<"la poblacion estudiantil aumenta en 10 años a:  "<< poblacion << endl;

    return 0;
}
