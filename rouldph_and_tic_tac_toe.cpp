#include <bits/stdc++.h>
using namespace std;
void ans()
{
	string ans="DRAW";
	char c[10];
	for(int i=1;i<=9;i++)
	{
	    cin>>c[i];
	}
	for(int i=1;i<=9;i++) {
		for(int j=i+1;j<=9;j++) {
			for(int k=j+1;k<=9;k++) {
				if(c[i]!='.'&&c[i]==c[j]&&c[j]==c[k]&&k-j==j-i&&(k-j!=2||i==3)&&(k-j!=1||i==1||i==4||i==7))
				{
				    ans=c[i];
				}
			}
		}
	}
	cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		ans();
	}
	return 0;
}