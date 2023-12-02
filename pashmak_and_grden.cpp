#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    int x,y;
    x=x1-x2;
    y=y1-y2;
    int x5,y5;
    x5=(x>0) ? x : x*(-1);
    y5=(y>0) ? y : y*(-1);
    if(x!=0 && y!=0)
    {
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
    }
    else if(x!=0)
    {
        x3=x1;
        y3=y1+x5;
        x4=x2;
        y4=y2+x5;
    }
    else
    {
        x3=x1+y5;
        y3=y1;
        x4=x2+y5;
        y4=y2;
    }
    if(x!=0&&y!=0&&x5!=y5)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
}