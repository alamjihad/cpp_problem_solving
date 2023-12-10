#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[110];
    for(int i=0;i<n;++i)
    {
        cin>>str[i];
    }
    sort(str,str+n);
    cout<<str[n/2];
    return 0;
}
