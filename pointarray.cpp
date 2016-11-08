#ifndef GEOMETRY_H
#define GEOMETRY_H
#include <iostream>
#define pi 3.14159
using namespace std;

class punto{
private:
    int x;
    int y;
    char *name;
public:
    punto(){x=0,y=0;}
    punto(int x,int y);
    int getx(){return x;}
    int gety(){return y;}
    void setx(int new_x){x=new_x;}
    void sety(int new_y){y=new_y;}
    ~punto(){cout<<"punto elmininado"<<endl;}
};


class point_array{
private:
    int size;
    punto *points;
public:
    point_array();
    point_array(punto pts[], int tam);
    ~point_array(){ cout<<"array eliminado"<<endl;}
    void resize(int new_size);
    void push_back(const punto &p);
    void insert(const int position, const punto &p);
    void remove(const int pos);
    int getSize();
    void clear();

};

class poligono:public point_array{
protected:
    static int n_poligonos;
    point_array puntos;
public:
    poligono(const point_array &pa);
    poligono(punto p[],int n_puntos);
    virtual double area()=0;
    virtual double perimetro()=0;
    ~poligono(){cout<<"poligono eliminado"<<endl; --n_poligonos;}
    static int get_poligonos(){return n_poligonos;}
    int get_lados(){return puntos.getSize();}
    const point_array* getPoints() const {return &puntos;}

};

class rectangulo:public poligono{
private:
    punto x,y;
    int a,b,c,d;
public:
    rectangulo(punto x, punto y);
    rectangulo(int a,int b,int c,int d);
    double area(punto x, punto y);
    double area(int a,int b,int c,int d);
    //double perimetro();
    ~rectangulo(){cout<<"rectangulo eliminado"<<endl;}
};

class triangulo:public poligono{
private:
    punto a,b,c;
public:
    triangulo(punto a,punto b,punto c);
    double area();
    double perimetro();
    ~triangulo(){cout<<"circulo eliminado"<<endl;}
};

#endif // GEOMETRY_H
#include "geometry.h"
#include <math.h>


point_array::point_array()
{
    this->size=0;
    this->points=new punto[size];
}



point_array::point_array(punto pts[],int tam){
    this->size=tam;
    this->points=new punto[tam];
    for(int i=0;i<tam;i++){
        this->points[i]=pts[i];
    }
}

void point_array::resize(int new_size)
{
    punto *pts = new punto[new_size];
    int minsize;
    if (new_size > size)//comparo el tamao minimo
         minsize=size;
    else  minsize=new_size;

    for (int i=0; i < minsize; i++)
        pts[i] = points[i];//copia del arreglo de puntos
    delete[] points;//borro el anterior arreglo de puntos
    size = new_size;//reasigno el tamanio
    points = pts;//reasigno los puntos
}

void point_array::push_back(const punto &p)
{
    this->points[this->size+1]=p;
}

void point_array::insert(const int position, const punto &p)
{

        this->points[position]=p;

}

void point_array::remove(const int pos)
{
    this->points[pos];
    delete this;
    resize(this->size-1);
}

int  point_array::getSize()
{
    return this->size;

}

void point_array::clear()
{
    resize(0);
}

//int poligono:n=0;

poligono::poligono(const point_array &p) :puntos(p)
{
    ++n_poligonos;
}
poligono::poligono(punto p[],int n_puntos): puntos(p,n_puntos){
    ++n_poligonos;
}


//rectangulo
punto consPoints[4];

punto rectangulo::*upConsPoints(const punto &p1, const punto &p2, const punto &p3, const punto &p4 = punto(0,0))
{
    consPoints[0] = p1;
    consPoints[1] = p2;
    consPoints[2] = p3;
    consPoints[3] = p4;
    return consPoints;
}




rectangulo::rectangulo(punto x, punto y)
{
    punto q,w,e,r;
    q.setx(x.getx());
    q.sety(0);
    w.setx(x.getx());
    w.sety(x.gety());
    e.setx(y.getx());
    e.sety(0);
    r.setx(y.getx());
    r.sety(y.gety());

    upConsPoints(q,w,e,r);
}
rectangulo::rectangulo(int a, int b, int c, int d){
    punto q,w,e,r;
    q.setx(a);
    q.sety(0);
    w.setx(a);
    w.sety(b);
    e.setx(c);
    e.sety(0);
    r.setx(c);
    r.sety(d);
    upConsPoints(q,w,e,r);

}


double rectangulo::area(punto x,punto y){
    int ladox=y.getx()-x.getx();
    int ladoy=y.gety()-x.gety();
    return ladox*ladoy;
}
double rectangulo::area(int a, int b, int c, int d){
    int ladox=c-a;
    int ladoy=d-b;
    return ladox*ladoy;
}



double triangulo::area()
{
    double mod1=sqrt(pow(a.getx(),2)+pow(b.gety(),2));
    double mod2=sqrt(pow(b.gety(),2)+pow(c.getx(),2));
    double mod3=c.getx()-a.getx();
    double s=(mod1+mod2+mod3)/2;
    return sqrt(s*(s-mod1)*(s-mod2)*(s-mod3));
}

