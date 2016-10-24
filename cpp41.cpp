#include <iostream>

using namespace std;

int main ()
{
short number ;
cout << " Enter a number : ";
cin >> number ;

 cout << "The factorial of " << number << " is ";
 int accumulator = 1;
 for (; number > 0; accumulator *= number --);
 cout << accumulator << ".\n";

 return 0;
 }
//1/1/2/362880/3628800
//1
//deberia ser 15511210043330985984000000 y es 2076180480

//continuacion, ediciion para numeros positivos y no muy grandes
/*
int main ()
{
short number ;
cout << " Enter a number : ";
cin >> number ;

 cout << "The factorial of " << number << " is ";
 int accumulator = 1;
 if(number>=0 && number<11){
     for (; number > 0; accumulator *= number --);
     cout << accumulator << ".\n";
 }else cout<<"numero invalido"<<endl;

 return 0;
 }
 
 switch(number){
 case n==11:
      cout<<"factorial 11"<<endl;
 case n==12:
      cout<<"factorial 12"<<endl;
 case n==13:
      cout<<"factorial 13"<<endl;
 case n==14:
      cout<<"factorial 14"<<endl;
 default:
      cout<<"numero muy grande"<<endl;*/

//deberiamos considerar el caso de numeros reales en general y ponerles una sentencia.
 
 
