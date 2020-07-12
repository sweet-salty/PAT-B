#include<bits/stdc++.h>
using namespace std;

const int maxn=1000;
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,m;
    int a[maxn];
    cin>>n>>m;
    m=m%n;//右移再多轮也一样
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-m;i++)
    {
        a[n+i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[n-m+i];
        cout<<a[i];
        if(i+1<n)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
