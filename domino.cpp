#include<bits/stdc++.h>
using namespace std;
void ans(int n)
{
    int arr1[n+1],arr2[n+1],i;
    int s1=0,s2=0;
    for(i=0;i<n;++i)
    {
        cin>>arr1[i];
        s1=s1+arr1[i];
        cin>>arr2[i];
        s2=s2+arr2[i];
    }
    int ans=0;
    int count=0;
    if(s1%2==0&&s2%2==0)
    {
        cout<<ans;
    }
    else if((s1%2==0&&s2%2==1)||(s1%2==1&&s2%2==0))
    {
        cout<<"-1";
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if((arr1[i]%2==0 && arr2[i]%2==1)||(arr1[i]%2==1&&arr2[i]%2==0))
            {
                cout<<ans+1;
                break;
            }
            count++;
        }
        if(count==n)
        {
            cout<<"-1";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    ans(n);
    return 0;
}