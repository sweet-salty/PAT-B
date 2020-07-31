#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s1,s2;
    string ans;
    int pos=0;
    char c;
    bool f=false;
    getline(cin,s1);//可能为空行时采用getline
    getline(cin,s2);
    if(s1.find('+')!=string::npos)
    {
        f=true;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]>='a'&&s2[i]<='z')
        {
            c=s2[i]-'a'+'A';
        }
        else
            c=s2[i];
        if(s1.find(c)==string::npos)
        {
            if((f&&(s2[i]<'A'||s2[i]>'Z'))||!f)
            {
                ans.insert(pos,s2.substr(i,1));
                pos++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
