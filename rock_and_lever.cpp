void ans(int n)
{
    long long int i,j,x,y,ans=0,arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=30;i>=0;i--)
    {
        c = 0;
        for(j=0;j<n;++j)
        {
            x = 1<<i;
            y = 1<<(i+1);
            if(arr[j]>=x && arr[j]<y)
            {
                c++;
            }
        }
        ans+=(c*(c-1)/2);
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ans(n);
    }
    return 0;
}