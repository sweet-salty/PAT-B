#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1002.txt","r",stdin);
    #endif // ONLINE_JUDGE

    map<int,string> mp;//连续数字键可以直接用数组
    mp[0]="ling";mp[1]="yi";mp[2]="er";mp[3]="san";mp[4]="si";
    mp[5]="wu";mp[6]="liu";mp[7]="qi";mp[8]="ba";mp[9]="jiu";

    string s;
    stack<int> sta;
    int num=0,a;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        num+=s[i]-'0';
    }
    while(num>0)
    {
        a=num%10;
        num/=10;
        sta.push(a);
    }
    while(!sta.empty())
    {
        cout<<mp[sta.top()];
        sta.pop();
        if(!sta.empty())
            cout<<" "
    }
    cout<<endl;
    return 0;
}
