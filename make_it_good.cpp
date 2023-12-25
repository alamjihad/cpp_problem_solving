#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        int arr[n+10];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];	
		}
		int k=n;
		while(arr[k-1]>=arr[k]&&k>1)
        {
            k--;
        }
		while(arr[k-1]<=arr[k]&&k>1)
        {
            k--;
        }
		cout<<k-1<<endl;
	}
	return 0;
}