#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string str;
    int n=0;
    stack<string> sta;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            sta.push(str.substr(n,i-n));
            n=i+1;
        }
        if(i+1==str.length())
        {
            sta.push(str.substr(n,i-n+1));
            n=i+1;
        }
    }
    while(!sta.empty())
    {
        cout<<sta.top();
        sta.pop();
        if(!sta.empty())
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
