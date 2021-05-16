#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float k,m;  //Declaro variables
    cout << "Ingrese Velocidad en Km/Hs:" << endl;  //Muestro por pantalla
    cin>>k;                                         //Guardo la variable ingresada en k
    m=(k/3.6);                                      //Realiza la conversion a mt/seg
    cout<<"La conversion en M/Sg es :"<< m <<endl;  //Muestro por pantalla la conversion realizada
    return 0;
}
