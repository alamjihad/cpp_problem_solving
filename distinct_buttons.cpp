#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;++i)
        {
            int x,y;
            cin>>x>>y;
            if(x<0)
            {
                l=1;
            }
            if(x>0)
            {                
                r=1;
            }
            if(y<0)
            {
                d=1;
            }
            if(y>0)
            {
                u=1;
            }
        }
        if((l+r+u+d)==4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}