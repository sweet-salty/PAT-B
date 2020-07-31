#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUEGE

    char mp[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string s;
    int n,sum,j;
    bool f=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        sum=0;
        for(j=0;j<17;j++)
        {
            if(s[j]>='0'&&s[j]<='9')
            {
                sum+=quan[j]*(s[j]-'0');
            }
            else
            {
                cout<<s<<endl;
                f=true;
                break;
            }
        }
        if(j==17)
        {
            if(s[j]!=mp[sum%11])
            {
                cout<<s<<endl;
                f=true;
            }
        }
    }
    if(!f)
        cout<<"All passed"<<endl;
    return 0;
}
