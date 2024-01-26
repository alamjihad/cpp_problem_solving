#include <bits/stdc++.h>
using namespace std;
void ans(int n,int k)
{
    int arr[n],c;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        sort(arr,arr+n);
        c=0;
        for(int i=0;i<n-k;i++)
        {
            if(i<n-2*k)
            { 
                c+=arr[i];
            }
            else
            {
                c+=(arr[i]/arr[i+k]);
            }
        }
        cout<<c<<endl;
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans(n,k);
    }
    return 0;
}