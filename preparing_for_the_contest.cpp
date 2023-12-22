#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=n-k;i<=n;++i)
        {
            cout<<i<<" ";
        }
        for(int j=n-k-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
