#include<iostream>
using namespace std;
void ans(int n, int k)
{
    int arr[110];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;++i)
        {
            if(k==1&&arr[i]>arr[i+1])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,k,arr[110];
        cin>>n>>k;
        ans(n,k);
    }
    return 0;
}
