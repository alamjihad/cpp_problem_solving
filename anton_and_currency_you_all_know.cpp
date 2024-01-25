#include<iostream>
using namespace std;
void ans()
{
    string str;
    int l=0,temp;
    cin>>str;
    for(int i=0;str[i]!='\0';++i)
    {
        l++;
    }
    int x=l-1,in=x;
    for(int i=0;i<l;++i)
    {
        if((str[i]-'0')%2==0)
        {
            in=i;
           if(str[x]>str[i])
           {
                break;
           } 
        }
    }
    if(l-1==in)
    {
        cout<<"-1";
    }
    else
    {
        temp=str[x];
        str[x]=str[in];
        str[in]=temp;
        cout<<str;
    }
}
int main()
{
    ans();
    return 0;
}