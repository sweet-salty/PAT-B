#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int n,a,b,c;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d %d",&a,&b,&c);
        mp[a]+=c;
    }
    int m=0,mt;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>m)
        {
            m=it->second;
            mt=it->first;
        }
    }
    cout<<mt<<" "<<m<<endl;
    return 0;
}
