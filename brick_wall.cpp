#include <iostream>
using namespace std;
int main() 
{
  int t;
  cin>>t;
  for(int i=0;i<t;++i)
  {
      int n,m,s;
      cin>>n>>m;
      s=n*(m/2);
      cout<<s<<endl;
  }
  return 0;
}