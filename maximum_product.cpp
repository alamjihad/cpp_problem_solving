#include<bits/stdc++.h>
using namespace std;
void ans()
{
    long long n,i,arr[n],ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<max(arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3],max(arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1],arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5]))<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ans();
    }
    return 0;
}