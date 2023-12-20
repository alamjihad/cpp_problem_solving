#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[53];
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        int m=n*2,c=0;
        for(int j=2;j<=m;++j)
        {
            int l=1,s=0,r=n;
            while(l<r)
            {
                if(arr[l]+arr[r]>j)
                {
                    r--;
                }
                else if(arr[l]+arr[r]<j)
                {
                    l++;
                }
                else
                {
                    s++;
                    l++;
                    r--;
                }
            }
            c=max(c,s);
        }
        cout<<c<<endl;
    }
    return 0;
}