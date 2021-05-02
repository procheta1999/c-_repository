#include <iostream>
using namespace std;
int main()
{
    int a, s=0, p=1;
    cout<<"input a number:";
    cin>>a;
    for (int i=2;i<a;i++)
    {
            if (a % i==0 && i % 2==0)
            {
                cout<<"even"<<i<<endl;
                s=s+i;
            }
            else if (a % i==0 && i % 2==1){
                    cout<<"odd"<<i<<endl;
                p=p*i;
            }
    }
    cout<<"sum of even factors is: "<<s<<", product of odd factors is: "<<p<<endl;
    return 0;
}
