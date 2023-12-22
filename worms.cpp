#include<iostream>
using namespace std;
int main()
{
    int  arr[1000001],n,x,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        for(int j=k;j<x+k;j++)
        {
            arr[j]=i;
        }
        k=k+x;   
    }
    int l;
    cin>>l;
    while(l--)
    {
        cin>>x;
        cout<<arr[x]<<endl;
    }
    return 0;
}