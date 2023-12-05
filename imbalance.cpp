#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str,s="NO";
        cin>>n;
        cin>>str;
        for(int i=0;i<n;++i)
        {
            if(str[i]=='0')
            {
                s="YES";
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}