#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string arr;
		cin>>arr;
		int c=0;
		for(int i=0;i<n;++i)
		{
			if(arr[i]!=arr[i+1])
			{
				c++;
			}
		}
		if(b>=0)
		{
			cout<<n*(a+b)<<endl;
			continue ;
		}
		else
		{
			cout<<(c/2+1)*b+a*n<<endl;
		}
	}
	return 0;
}