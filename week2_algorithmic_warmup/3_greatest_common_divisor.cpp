#include<iostream>
using namespace std;
int euclid(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return euclid(b,a%b);
}
int main()
{
    long long int a,b;
    long long int temp;
    cin>>a>>b;
    if(a<b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    cout<<euclid(a,b);
    return 0;
}
