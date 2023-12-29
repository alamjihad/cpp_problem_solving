#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        long long int n,a,s=0,d;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            s+=a;
        }
        d=sqrt(s);
        if(d*d==s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
  return 0;
}