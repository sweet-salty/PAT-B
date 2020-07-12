#include<bits/stdc++.h>
using namespace std;

const int maxn=1005;
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int ans[maxn][2];
    int a,b,i=0;
    while(cin>>a>>b)
    {
        ans[i][0]=a;
        ans[i][1]=b;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        ans[j][0]*=ans[j][1];
        ans[j][1]-=1;
    }
    for(int j=0;j<i;j++)
    {
        if(j==0&&ans[j][0]==0&&ans[j][1]==-1)//特别注意零多项式
        {
            cout<<0<<" "<<0;
            break;
        }
        if(ans[j][1]>=0)
        {
            cout<<ans[j][0]<<" "<<ans[j][1];
        }
        if(j+1<i&&ans[j][1]>=0&&ans[j+1][1]>=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
