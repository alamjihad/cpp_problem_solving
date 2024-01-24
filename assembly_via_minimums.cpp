#include<bits/stdc++.h>
using namespace std;
void ans()
{
    int n;
    cin>>n;
    int m=n*(n-1)/2,arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i+=--n)
    {
        cout<<arr[i]<<' ';
    }
    cout<<"1000000000"<<endl;;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ans();
    }
}