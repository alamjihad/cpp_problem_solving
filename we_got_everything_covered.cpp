#include<bits/stdc++.h>
using namespace std;
void ans()
{
    int n,k;
    cin>>n>>k;
    string str="abcdefghijklmnopqrstuvwxyz";
    string str2=str.substr(0,k);
    while(n--)
    {
        cout<<str2;
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ans();
    }
    return 0;
}