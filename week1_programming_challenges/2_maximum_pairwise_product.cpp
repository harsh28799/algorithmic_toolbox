#include<iostream>
using namespace std;
int main()
{
    long long int i;
    long long int temp;
    long long int product;
    long long int max1,max2;
    long long int num;
    cin>>num;
    long long int arr[num];
    for(i=0;i<num;i++)
        cin>>arr[i];
    max1=0;
    max2=1;
    for(i=0;i<num;i++)
        if(arr[i]>arr[max1])
            max1=i;
    temp=arr[max1];
    arr[max1]=arr[num-1];
    arr[num-1]=temp;
    for(i=0;i<num-1;i++)
        if(arr[i]>arr[max2]&&arr[i]!=arr[max1])
            max2=i;
    temp=arr[max2];
    arr[max2]=arr[num-2];
    arr[num-2]=temp;
    product=arr[num-1]*arr[num-2];
    cout<<product;
}
