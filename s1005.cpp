#include<bits/stdc++.h>
using namespace std;

const int maxn=105;

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    map<int,int> mp;
    int a[maxn],ans[maxn];
    int k,b;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        mp[a[i]]=1;
    }
    for(int i=0;i<k;i++)
    {
        b=a[i];
        while(b!=1)
        {
            if(b%2==0)
            {
                b/=2;
                if(mp.count(b))
                    mp[b]=0;
            }
            else
            {
                b=(3*b+1)/2;
                if(mp.count(b))
                    mp[b]=0;
            }
        }
    }
    int j=0;
    for(int i=0;i<k;i++)
    {
        if(mp[a[i]]!=0)
        {
            ans[j++]=a[i];
        }
    }
    sort(ans,ans+j,cmp);
    for(int i=0;i<j;i++)
    {
        cout<<ans[i];
        if(i+1!=j)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
