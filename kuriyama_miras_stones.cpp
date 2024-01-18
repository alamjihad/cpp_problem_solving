#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,t,l,r;
    long long arr1[100001],arr2[100001];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l;
        arr2[i]=arr1[i]=l;
    }
    sort(arr2+1,arr2+n+1);
    for(i=1;i<=n;i++)
    {
        arr1[i]+=arr1[i-1];
        arr2[i]+=arr2[i-1];
    }
    cin>>m;
    while(m--)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            cout<<arr1[r]-arr1[l-1]<<endl;
        }
        else
        {
            cout<<arr2[r]-arr2[l-1]<<endl;
        }
    } 
    return 0;
}