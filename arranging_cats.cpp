#include<iostream>
using namespace std;
void ans(int n)
{
    string str1,str2;
    cin>>str1>>str2;
    int o=0,c=0,t=0,s;
    for(int i=0;i<n;++i)
    {
        if(str1[i]=='1')
        {
            o++;
        }
        if(str2[i]=='1')
        {
            t++;
        }
        if(str2[i]!=str1[i]&&str2[i]=='1')
        {
            c++;
        }
    }
    s=c;
    if(o>t)
    {
        s+=(o-t);
    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ans(n);
    }
    return 0;
}