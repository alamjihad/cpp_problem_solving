#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,m=0;
        char str;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>str;
            if(str=='+')
            {
                p++;
            }
            else
            {
                m++;
            }
        }
        if(p>m)
        {
            cout<<p-m<<endl;
        }
        else if(p==m)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<m-p<<endl;
        }
    }
    return 0;
}