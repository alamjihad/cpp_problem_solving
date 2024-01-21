#include<iostream>
using namespace std;
void ans ()
{
    int i,j,d,n;
    cin>>n;
    for (i=2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            d = n/i;

            for (j=i+1; j*j<d; j++)
            {
                if (d % j == 0)
                {
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<j<<" "<<d/j<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        ans();
    }
    return 0;
}