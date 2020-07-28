#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int a,b,d,sum;
    vector<int> ans;
    cin>>a>>b>>d;
    sum=a+b;
    if(sum==0)//一定要注意是0的情况
        cout<<0<<endl;
    else
    {
        while(sum>0)
        {
            ans.push_back(sum%d);
            sum/=d;
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
