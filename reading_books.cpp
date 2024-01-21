#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,i,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        n/=m;
        for(i=s=0;i++<10;){
            s+=m*i%10;
        }
        s*=n/10;
        for(i=0;i++<n%10;){
            s+=m*i%10;
        }
        cout<<s<<endl;
    }
}
