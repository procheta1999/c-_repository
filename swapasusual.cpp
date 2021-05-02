#include <iostream>
using namespace std;
int swap(int a, int b);
int main()
{
    int c,d;
    cout<<"Input numbers";
    cin>>c>>d;
    swap(c,d);
    return 0;
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"first= "<<a<<" ,second= "<<b<<endl;
}
