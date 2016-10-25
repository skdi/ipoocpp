/*Andre Mogrovejo Martines
  Maria Lourders Apaza
  Brayan Alexander Lipe*/

//main
#include <iostream>
#include "poligono.h"


int main()
{
   circulo *c;
   cout<<c->area(1)<<endl;
   cout<<c->perimetro(4.0)<<endl;
   triangulo *t;
   cout<<t->area(3,3,5)<<endl;
   cout<<t->perimetro(4,3,4)<<endl;
   cuadrado *cd;
   cout<<cd->area(2,4)<<endl;
   cout<<cd->perimetro(2,4)<<endl;
   estrellita_regular *e;
   cout<<e->area(24,4)<<endl;
   cout<<e->perimetro(4,6)<<endl;
   e->tipo(4);
   //delete c;

}

//poligono.cpp
#include "poligono.h"
#include <iostream>
#include <math.h>

using namespace std;

//circulo

double circulo::area(float radio){
    cout<<"area circulo"<<endl;
    return pi*pow(radio,2);
}

double circulo::perimetro(float radio)
{
    cout<<"peri circulo"<<endl;
    return 2*pi*radio;

}

//cuadrilatero
double cuadrado::area(float ladox,float ladoy){
    cout<<"area cuadrado"<<endl;
    return ladox*ladoy;

}

double cuadrado::perimetro(float ladox, float ladoy)
{
    cout<<"peri cuadrado"<<endl;
    return 2*ladox+2*ladoy;

}

//triangulo
double triangulo::area(float c1,float c2,float hi){
    cout<<"area triangulo"<<endl;
    double aux=
            (1/4)*sqrt((c1+c2-hi)*
                       (c1-c2+hi)*
                       (-c1+c2+hi)*
                       (c1+c2+hi));
    return aux;

}
 double triangulo::perimetro(float c1, float c2, float hi)
 {
    cout<<"peri circulo"<<endl;
    return c1+c2+hi;

 }

//estrellita
double estrellita_regular::area(float perimetro,float apotema){
    cout<<"El area del poligono es: "<<endl;
    return (perimetro*apotema)/2;
}
double estrellita_regular::perimetro(float lado, float n_lados)
{
    cout<<"El Perimetro del poligono es: "<<endl;
    return lado*n_lados;
}

//tipo triangulo
void triangulo::tipo(float c1,float c2,float hi){
    if(c1==c2==hi)
        cout<<"triangulo equilatero"<<endl;
    else if((c1==c2)!=hi)
        cout<<"triangulo isoceles"<<endl;
    else if(c1!=c2!=hi)
        cout<<"triangulo escaleno"<<endl;
    else if(sqrt(pow(c1,2)+pow(c2,2))==hi)
        cout<<"triangulo rectangulo"<<endl;
}

//tipo estrellita
void estrellita_regular::tipo(int nl){

    if(nl==1)
        cout<<"punto"<<endl;
    else if(nl==2)
        cout<<"recta"<<endl;
    else if(nl==3)
        cout<<"triangulo"<<endl;
    else if(nl==4)
        cout<<"cuadrilatero"<<endl;
    else if(nl==5)
        cout<<"pentagono"<<endl;
    else if(nl==6)
        cout<<"hexagono"<<endl;
    else if(nl>=7)
        cout<<"figura de muchos lados"<<endl;
}


//poligono.h
#ifndef POLIGONO_H
#define POLIGONO_H
#define pi 3.1416
#include <iostream>
using namespace std;


class poligono{
public:
    poligono();
    virtual const double area()=0;
    virtual const double perimetro()=0;
    ~poligono(){cout<<"poligono eliminado"<<endl;}
};

class circulo:public poligono{
public:
    circulo();
    float radio,angulo;
    double area(float radio);
    double perimetro(float radio);
    ~circulo(){cout<<"circulo eliminado"<<endl;}
};

class triangulo:public poligono{
public:
    triangulo();
    float cateto1,cateto2,hipotenusa;
    double area(float cateto1,float cateto2,float hipotenusa);
    double perimetro(float cateto1, float cateto2, float hipotenusa);
    void tipo(float cateto1,float cateto2,float hipotenusa);
    ~triangulo(){cout<<"triangulo eliminado"<<endl;}

};
class cuadrado:public poligono{
public:
    cuadrado();
    float ladox,ladoy;
    double area(float ladox,float ladoy);
    double perimetro(float ladox, float ladoy);
    ~cuadrado(){cout<<"cuadradoeliminado"<<endl;}
};

class estrellita_regular:public poligono{
public:
    estrellita_regular();
    int n_lados,n_vertices, apotema, lado;
    double area(float perimetro, float apotema);
    double perimetro(float lado, float n_lados);
    void tipo(int n_lados);
    ~estrellita_regular(){cout<<"poligono eliminado"<<endl;}
};

#endif // POLIGONO_H
