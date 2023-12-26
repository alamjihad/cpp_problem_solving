#include<iostream>
using namespace std;
int main(){
int n,a,b=-1,s=0,q=0;
	cin>>n;
	while(n--) 
	{
		cin>>a;
		s+=a;
		q+=1-2*a;
		b=max(b,q);
		q=max(0,q);
	}
	cout<<s+b;
	return 0;
}