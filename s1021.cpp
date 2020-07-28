#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s;
    cin>>s;
    int ans[10]={0};
    for(int i=0;i<s.length();i++)
    {
        ans[s[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(ans[i]!=0)
        {
            printf("%d:%d\n",i,ans[i]);
        }
    }
    return 0;
}
