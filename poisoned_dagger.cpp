#include<bits/stdc++.h>
using namespace std;
void ans()
{
    long long int n,i,h;
    cin>>n>>h;
    long long int arr[n+3],l=1,r=h;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(l<r)
    {
        long long int m,c;
        m=(l+r)/2;
        c=m;
        for(i=1;i<n;++i)
        {
            if(m<arr[i]-arr[i-1])
            {
                c+=m;
            }
            else
            {
                c+=arr[i]-arr[i-1];
            }
        }
        if(c<h)
        {
            l=m+1;
        }
        else
        {
            r=m;
        }
    }
    cout<<l<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ans();
    }
    return 0;
}