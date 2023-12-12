#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int str[110];
        for(int i=0;i<n;++i)
        {
            cin>>str[i];
        }
        sort(str,str+n);
        cout<<(str[n-1])-(str[0])<<endl;
    }
    return 0;
}

