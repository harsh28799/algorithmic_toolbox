#include<iostream>
using namespace std;
int main()
{
    int i;
    int num;
    long long int a=0.0,b=1.0,c;
    cin>>num;
    for(i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(num==0||num==1)
        cout<<num;
    else
        cout<<c;
    return 0;
}
