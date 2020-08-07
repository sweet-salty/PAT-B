#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s1,s2,s;
    cin>>s1>>s2;
    map<int,char> mp={{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5'},{6,'6'},{7,'7'},{8,'8'},{9,'9'},{10,'J'},{11,'Q'},{12,'K'}};
    int n,i=1,a,len;
    stack<char> sta;
    len=s1.length()-s2.length();
    for(int k=0;k<abs(len);k++)//差值提前赋给int
    {
        s+="0";
    }
    if(s1.length()<s2.length())
    {
        s1.insert(0,s);
    }
    else
    {
        s2.insert(0,s);
    }
    n=max(s1.length(),s2.length());
    while(i<=n)
    {
        if(i%2==1)
        {
            a=s1[n-i]-'0'+s2[n-i]-'0';
            a%=13;
            sta.push(mp[a]);
        }
        else
        {
            a=s2[n-i]-s1[n-i];
            if(a<0)
                a+=10;
            sta.push(mp[a]);
        }
        i++;
    }
    while(sta.size()!=0)
    {
        cout<<sta.top();
        sta.pop();
    }
    cout<<endl;
    return 0;
}
