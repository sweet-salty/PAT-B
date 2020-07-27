#include<bits/stdc++.h>
using namespace std;

int get(char ch,int n)
{
    int ans=0,x=ch-'0';
    for(int i=0;i<n;i++)
    {
        ans*=10;
        ans+=x;
    }
    return ans;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string a,b;
    char da,db;
    int x=0,y=0,ca,cb;
    cin>>a>>da>>b>>db;
    ca=count(a.begin(),a.end(),da);
    cb=count(b.begin(),b.end(),db);
    if(ca!=0)
        x=get(da,ca);
    if(cb!=0)
        y=get(db,cb);
    cout<<x+y<<endl;
    return 0;
}
