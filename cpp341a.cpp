#include <iostream>

using namespace std;
void loops(int n);
void loops2(int n);
void loops3();

int main()
{
    cout << 50%5 << endl;
    loops3();
    return 0;
}

void loops(int n)
{

    while(1)
    {
        ((n>0) && (n%5==0))?cout<<(n/=5)<<endl:cout<<-1<<endl;
    }
}

void loops2(int n){
    while(1)
    {
        if(n>0 && (n%5==0))
            cout<<(n/=5)<<endl;
        else continue;
    }

}

void loops3(){
    int n;
    while(1)
    {
        cin>>n;
        if(n>0 && (n%5==0))
            cout<<(n/=5)<<endl;
        else if(n<0){
            cout<<"Goodbye"<<endl;
            break;
        }
    }


}
