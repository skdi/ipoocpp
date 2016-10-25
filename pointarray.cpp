#ifndef GEOMETRY_H
#define GEOMETRY_H




class punto{
private:
    int x;
    int y;
    char *name;
public:
    punto();
    punto(const int x=0,const int y=0);
    int getx(){return x;}
    int gety(){return y;}
    void setx(int new_x){x=new_x;}
    void sety(int new_y){y=new_y;}
};


class point_array{
private:
    int size;
    punto *points;
public:
    point_array();
    point_array(const punto pts[],int tam);
};



#endif // GEOMETRY_H

#include "geometry.h"








point_array::point_array()
{
    this->size=0;
    this->points=new points[size];
}



point_array::point_array(const punto pts[],int tam){
    this->size=tam;
    this->points=new punto[tam];
    for(int i=0;i<tam;i++){
        this->points[i]=pts[i];
    }
}
