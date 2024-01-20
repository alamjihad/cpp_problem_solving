#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3],z=0;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int m=(1<<n);
    for(int i=0;i<m;++i)
    {
        int s=0;
        for(int j=0;j<n;++j)
        {
            if(i&(1<<j))
            {
                s+=arr[j];
            }
            else
            {
                s-=arr[j];
            }
        }
        if(s%360==0)
        {
            z=1;
            break;
        }
    }
    if(z==1)
    {
        cout<<"YES"<<endl;        
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}