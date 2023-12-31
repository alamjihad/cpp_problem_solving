#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b;
        x =__gcd(a,b);
        a/=x;
        b/=x;
        if(a==1)
        {
            cout<<b*b*x<<endl;
        }
        else
        {
            cout<<a*b*x<<endl;
        }
    }
    return 0;
}