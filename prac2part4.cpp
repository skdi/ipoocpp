#include <iostream>
//usar const arguments
using namespace std;
int suma(const int a,const int b){
    return a+b;
}
double suma(const double a,const double b){
    return a+b;
}
/*int suma(int a,int b){
    a=a+b;
    return a;
}*/
int suma(int a,int b,int c,int d){
    return a+b+c+d;
}
int suma(){
    return 5+3;
}
//4.4
int suma(const int elementos, const int *array)
{
    int result = 0;
    for (int i = 0; i < elementos; i++) {
        result += array[i];
    }
    return result;
}
//4.5
int result=0,i=0;
int sum(const int elementos, const int *array)
{

    if(elementos>0)
    {
        result+=array[i];
        sum(elementos-1,array);
        i++;
    }
    return result;
}

main(){

    //cout<<suma(1,10.0)<<endl;
    //cout<<suma(3,5,7);
    int a[]={3,5,7,9};
    //cout<<suma(4,a)<<endl;
    cout<<sum(4,a);
}
//(4.2)la llamada de sobrecarga a suma es dudosa,y el compilador
//no sabe a cual llamar
//4.4 no encuentra aque funcion llamar
//


