#include <iostream>

using namespace std;

int main()
{
    float y,m1,m2,b1,b2,x;
    cout << "Ingrese las Coordenadas de la primera recta" << endl;      //Ingreso de variables
    cout<<"M1:";
    cin>>m1;
    cout<<"B1:";
    cin>>b1;
    cout<<"Ingrese las Coordenadas de la segunda recta"<<endl;
    cout<<"M2:";
    cin>>m2;
    cout<<"B2:";
    cin>>b2;
    if(m1==m2)                                                          //Si m1 es igual a m2 se va a entrar al if
    {
        cout<<"Las rectas no se cruzan, son PARALELAS "<<endl;          // mostramos por pantalla el siguiente mensaje
    }
    else
    {
        x=(b2-b1)/(m1-m2);                                              //Ecuacion de la interseccion en el eje x
        y=(m1*x)+b1;                                                    // Ecuacion de la interseccion en el eje y
        cout<<"Las rectas se cruzan en el eje X="<<x<<endl;             // Mostramos por pantalla el mensaje acompañado del valor del eje x
        cout<<"Las rectas se cruzan en el eje Y="<<y<<endl;             //Mostramos por pantalla el mensaje acompañado del valor del eje y
    }


    return 0;
}
