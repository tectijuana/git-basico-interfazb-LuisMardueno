#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int A,B,C,D,F,G;
int main()
{
srand(time(0));
for (int i = 0; i<999; i++)
{
    int dice = (int) (1+rand()%6);
switch (dice)
    {
        case 1:
            A++;
        break;

        case 2:
            B++;
        break;

        case 3:
            C++;
        break;

        case 4:
            D++;
        break;

        case 5:
            F++;
        break;

        case 6:
            G++;
        break;
    }
}
cout<<"Cara 1 :"<<A<< endl;
cout<<"Cara 2 :"<<B<< endl;
cout<<"Cara 3 :"<<C<< endl;
cout<<"Cara 4 :"<<D<< endl;
cout<<"Cara 5 :"<<F<< endl;
cout<<"Cara 6 :"<<G<< endl;
return 0;
}
