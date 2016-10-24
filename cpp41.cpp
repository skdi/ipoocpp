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
