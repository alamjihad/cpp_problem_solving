#include<iostream>
using namespace std;
void ans()
{
    int n,r;
    cin>>n;
    long long int s=0;
    int o=0,e=0,arr[n+3];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        s=s+arr[i];
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        r=o/3;
        if(e==0 && o==1)
        {
            r=0;
        }
        else if(o%3==1)
        {
            r=(o+2)/3;
        }
        cout<<s-r<<" ";
    }
    cout<<"\n";
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
