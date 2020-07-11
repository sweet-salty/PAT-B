#include<bits/stdc++.h>
using namespace std;

const int maxn=11;
bool Judge(string str)
{
    int a,b,c;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='P'&&str[i]!='A'&&str[i]!='T')
            return false;
    }
    if(str.find("P")!=string::npos&&str.find("A")!=string::npos&&str.find("T")!=string::npos)
    {
        a=str.find("P")-0;
        b=str.find("T")-str.find("P")-1;
        c=str.length()-str.find("T")-1;
        if(c==a*b)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;
    bool f;
    string str;
    bool flag[maxn];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        f=Judge(str);
        if(f)
            flag[i]=true;
        else
            flag[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(flag[i])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
