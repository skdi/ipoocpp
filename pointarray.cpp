#ifndef GEOMETRY_H
#define GEOMETRY_H
#include <iostream>
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
    void push_back(const punto &p);
    void insert(const int position, const punto &p);
    void remove(const int pos);
    int getSize();
    void clear();

};



#endif // GEOMETRY_H

#include "geometry.h"



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
    delete (this->points[pos]);
}

int  point_array::getSize()
{
    return this->size;

}

void point_array::clear()
{
    for(int i=0;i<this->size;i++)
    {
        delete this->points[size-i];
    }
}
