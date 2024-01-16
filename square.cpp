#include<iostream>
using namespace std;
void ans()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,s=1;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    if(x1==x3)
    {
        s=s*abs(y1-y3);
    }
    else
    {
        s=s*abs(x1-x3);
    }
    if(x2==x4)
    {
        s=s*abs(y2-y4);
    }
    else
    {
        s=s*abs(x2-x4);
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
    return 0;
}