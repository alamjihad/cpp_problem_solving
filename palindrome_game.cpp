#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        int n,s=0;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>c;
            if(c=='0')
            {
                s++;
            }
        }
        if(s%2==1&&s!=1)
        {
            cout<<"ALICE"<<endl;
        }
        else
        {
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}