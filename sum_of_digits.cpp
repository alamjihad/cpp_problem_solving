#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int c=0,l=str.length();
    while(l>1)
    {
        int s=0;
        for(int i=0;i<l;++i)
        {
            s+=str[i]-'0';
        }
        str=to_string(s);
        l=str.length();
        c++;
    }
    cout<<c;
    return 0;
}