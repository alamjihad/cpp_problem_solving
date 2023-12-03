#include<iostream>
using namespace std;
void ans(int n)
{
    int c=1;
    int a=0,b=0,x,y;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y;
        if(x<a||y<b||x<y||x-a<y-b)
        {
            c=0;
        }
        a=x;
        b=y;
    }
    if(c==1)
    {
        cout<<"YES"<<endl;        
    }
    else
    {
        cout<<"NO"<<endl;
    }

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