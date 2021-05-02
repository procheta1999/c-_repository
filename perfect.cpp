# include <iostream>
using namespace std;
int main()
{
    int a, s=0;
    cout<<"enter number:";
    cin>>a;
    for (int i=1;i<a;i++)
    {
        if (a % i==0)
        {
            s=s+i;
        }
    }
    if (s==a)
    {

        cout<<"perfect number"<<endl;
    }
    else{
        cout<<"not a perfect number"<<endl;
    }
}
