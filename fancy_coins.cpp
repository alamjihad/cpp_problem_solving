#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,k,a1,ak,a,b,c,d;
        cin >> m >> k >> a1 >> ak;
        a=max(0,m/k-ak);
        b=max(0,m%k-a1);
        c=max(0,a1-m%k);
        d=min(c/k,a);
        cout<<a+b-d<<endl;
    }
    return 0;
}
