#include <bits/stdc++.h>
using namespace std;
void ans(int y,int k,int n)
{
    int a;
	a=k-y%k;
	if (a>0&&y+a<=n)
	{
		for (int i=a;i<=n-y;i+=k)
        {
			cout<<i<<" ";
		}
	}
	else
    {
        cout<<-1;
    }
}
int main()
{
	int y,k,n;
    cin>>y>>k>>n;
    ans(y,k,n);
	return 0;
}