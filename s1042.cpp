#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s;
    char a;
    getline(cin,s);
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        a=tolower(s[i]);
        if(a>='a'&&a<='z')
        {
            mp[a]++;
        }
    }
    int m=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>m)
        {
            a=it->first;
            m=it->second;
        }
    }
    cout<<a<<" "<<mp[a]<<endl;
    return 0;
}
