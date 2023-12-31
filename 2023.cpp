#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,s=1,m;
        cin>>n>>k;
        for(int j=0;j<n;++j)
        {
            cin>>m;
            s*=m;
        }
        if(2023%s==0)
        {
            cout<<"YES"<<endl;
            cout<<2023/s<<" ";
            for(int j=0;j<k-1;++j)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}