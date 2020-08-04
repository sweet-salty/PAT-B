#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    map<int,int> mp;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(mp.count(a)==0)
        {
            mp[a]=1;
        }
        else
        {
            mp[a]++;
        }
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);//³¬Ê±Ñ¹ËõÊäÈëÊä³ö
        if(mp.count(a)==0)
        {
            printf("0");
        }
        else
        {
            printf("%d",mp[a]);
        }
        if(i+1<n)
            printf(" ");
    }
    printf("\n");
    return 0;
}
