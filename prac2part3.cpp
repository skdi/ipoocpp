/*2
#include <iostream>

using namespace std;

void f( const int a = 5)
{
    std :: cout << a*2 <<endl;
    }

    int a = 123;
int main (){

    f (1) ;
    f (a ) ;
    int b = 3;
    f (b ) ;
    int a = 4;
    f (a ) ;
    f();
}
//2 246 6 8 10
//deberia imprimir siempre 10, en cada llamada a la funcion por el const int
*/


//3.1
/*
#include <iostream>

int main(){
    printnum(35);
    return 0;
}

void printnum(int number){
    std::cout<<number;
}


//podemos poner la funcion encima del main
// podemos poner la asignacion de la funcion
*/


//3.2
/*
#include <iostream>
void printnum(){std::cout<<number;};

int main(){
    int number=35;
    printnum(number);
    return 0;
}

//el punto y coma esta mal puesto ,por la implementacion de la funcion
//separar la declaracion de la asignacion
*/


//3.3
/*
#include <iostream>
void doublenumber(int num){num=num*2;}

int main(){
    int num=35;
    doublenumber(num);
    std::cout<<num;
    return 0;
}
//imprimimos el valor de num,pero no lo modificamos
//deberiamos usar punteros para editar su valor
*/

//3.4
/*
#include <iostream>
#include <cstdlib>//contiene las librerias matematicas

int difference(const int x,const int y){
    int diff=abs(x-y);
}

int main(){
    std::cout<<difference(24,1238);
    return 0;
}
//no estamos usando la variable diff
//no retornamos ningun dato,por eso la funcion nos bota -1
*/

//3.5
/*
#include <iostream>
int sum(const int x,const int y){
    return x+y;
}

int main(){
    std::cout<<sum(1,2,3);
    return 0;
}
//le estamos pasando demasiados argumentos a la funcion
//deberiamos almacenar el resultado y ese multiplicarlo por el 3er termino
*/

//3.6
/*
#include <iostream>
const int ARRAY_LEN=10;

int main(){
    int arr[ARRAY_LEN]={10};
    int *xPtr=arr, yPtr=arr+ARRAY_LEN-1;
    std::cout<<*xPtr<<''<<*yPtr;
    return 0;
}
//conversion invalida a puntero Y
//ARRAY_len esta vacio
*/
