#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        int n,a,b,c=0;
        cin>>n;
        for(int i=10;i<n;i*=10)
        {
            a=n/i;
            b=n%i;
            if(b>a && ((b*10/i)!=0))
            {
                c=1;
                break;
            }
        }
        if(c)
        {
            cout<<a<<" "<<b<<endl;
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}