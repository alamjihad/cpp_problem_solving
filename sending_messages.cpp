#include <bits/stdc++.h>
using namespace std;
void ans()
{
    long long n,f,a,b;
    cin>>n>>f>>a>>b;
    long long arr[n+3],p=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        f=f-min(b,abs(arr[i]- p)*a);
        p=arr[i];
    }
    if (f > 0)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
    return 0;
}