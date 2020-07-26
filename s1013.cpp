#include<bits/stdc++.h>
using namespace std;

const int maxn=10002;
bool judge(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_GUDGE

    int n,m;
    int ans[10002];
    int i=0,j=2;
    cin>>m>>n;
    while(i<n)
    {
        if(judge(j))
        {
            ans[i]=j;
            i++;
        }
        j++;
    }
    j=0;
    if(m==0)
        m=1;
    for(i=m-1;i<n;i++)
    {
        cout<<ans[i];
        j++;
        if(j%10==0)
        {
            cout<<endl;
        }
        else if(i+1<n)
            cout<<" ";
    }
    return 0;
}
