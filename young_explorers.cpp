#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,arr[200002];
	cin>>t;
	while(t--)
	{
        int k=1,s=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
		    cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i]==k)
			{
				s++;
				k=0;
			}
			k++;
		}
		cout<<s<<endl;
	}
	return 0;
}
     		             	  		  	  	