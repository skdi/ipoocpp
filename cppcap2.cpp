#include <iostream>

using namespace std;
void imprime_n(int n);
void imprime_n2(int n);
void imprime_n3(int n);

int main()
{
    //1
    const char *p;
    p="hello world";
    cout << p << endl;
    //2,3,4
    int n;
    cout<<"n veces de impresion"<<endl;
    cin>>n;
    //n1,n2,n3 for/while/do while
    imprime_n3(n);

    return 0;
}

void imprime_n(int n)
{
    if(n>0){
        for(int i=0;i<n;i++)
        {
            cout <<"hello world"<<endl;
        }
    }
    else
        cout<<"error"<<endl;

}

void imprime_n2(int n){
    int i=0;
    if(n<0)
        cout<<"error"<<endl;
    while(i<n)
    {
        cout<<"hello world"<<endl;
        i++;
    }
}

void imprime_n3(int n){
    int i=0;
    do
    {
        cout<<"hello world"<<endl;
        i++;
    }while(i<n);
}

