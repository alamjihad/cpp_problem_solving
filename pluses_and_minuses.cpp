#include<bits/stdc++.h>
using namespace std;
void ans()
{
    string str;
    cin>>str;
    int l=0;
    for(int i=0;str[i]!='\0';++i)
    {
        l++;
    }
    long long c=0,s=0;
    for(int i=0;i<l; i++)
    {
        s++;
        if(str[i]=='+')
        {
            c++;
        }
        else
        {
            c--;
        } 
        if(c<0)
        {
            c=0;
            s+=(i+1);
        }
    }
    cout<<s<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		ans();
	}
}