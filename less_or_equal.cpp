#include<bits/stdc++.h>
using namespace std;
void ans()
{
    int n,k;
    cin>>n>>k;
    int arr[n+2],i,s;
    for(i=1;i<=n;++i)
    {
        cin>>arr[i];   
    }
    sort(arr+1,arr+n+1);
    if(k==0)
    {
        if(arr[1]==1)
        {
            s=-1;
        }
        else
        {
            s=1;
        }
    }
    else if(arr[k]==arr[k+1])
    {
        s=-1;
    }
    else
    {
        s=arr[k];
    }
    cout<<s;
}
int main()
{
    ans();
    return 0;
}