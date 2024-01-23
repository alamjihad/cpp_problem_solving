#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,s,c,n,b=0,d=1;
		cin>>a>>s;
		while(a>0)
		{
			c=a%10;
			n=s%10;
			if(n<c)
			{
				s/=10;
				n+=s%10*10;
			}
			if((c>n)||((n-c)>9))
			{
				b=-1;
				break;
			}
			b+=d*(n-c);
			a/=10;
			s/=10;
			d*=10;
		}
		if(b!=-1) 
		{
		    b+=d*s;
		}
		cout<<b<<endl;
	}
} 