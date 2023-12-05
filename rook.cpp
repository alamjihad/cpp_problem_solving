#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>k;
        for(i=1;i<=8;++i)
        {
            if(i!=k)
            {
                cout<<c<<i<<endl;
            }
        }
        for(char j='a';j<='h';++j)
        {
            if(j!=c)
            {
                cout<<j<<k<<endl;
            }
        }
    }
    return 0;
}
