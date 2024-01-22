#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[300000];
    cin>>n;
    for (int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int s=0;
    for (int i=0;i<n;++i)
    {
        s+=abs(i+1-arr[i]);
    }
    cout<<s;
    return 0;
}