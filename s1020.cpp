#include<bits/stdc++.h>
using namespace std;

struct cake{
    double ku;
    double xiao;
    double p;
    cake()
    {
        ku=0;
        xiao=0;
        p=0;
    }
};
bool cmp(cake a,cake b)
{
    return a.p>b.p;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;
    double d,k,x,ans=0;
    cin>>n>>d;
    cake c[n];
    for(int i=0;i<n;i++)
    {
        cin>>k;
        c[i].ku=k;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c[i].xiao=x;
        c[i].p=c[i].xiao/c[i].ku;
    }
    sort(c,c+n,cmp);
    int i=0;
    while(d>0&&i<n)//全部库存不满足需求
    {
        if(c[i].ku<=d)
        {
            d-=c[i].ku;
            ans+=c[i].xiao;
            i++;
        }
        else
        {
            ans+=d*c[i].p;
            d=0;
        }
    }
    printf("%.2f",ans);
    return 0;
}
