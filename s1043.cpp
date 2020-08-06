#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s="PATest",str;
    map<char,int> mp;
    cin>>str;
    int n=0;
    for(int i=0;i<str.length();i++)
    {
        if(s.find(str[i])!=string::npos)
        {
            mp[str[i]]++;
            if(mp[str[i]]>n)
                n=mp[str[i]];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(mp[s[j]]>0)
            {
                cout<<s[j];
                mp[s[j]]--;
            }
        }
    }
    cout<<endl;
    return 0;
}
