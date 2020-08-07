#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string a[2][13]={{"tret","jan","feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"},
        {"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"}};
    int n,an=0,k;
    string s,ans;
    bool f=false;
    cin>>n;
    cin.ignore();//舍弃第一个换行符，cin与getline连用
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        an=0;
        ans="";
        f=false;
        if(s[0]>='0'&&s[0]<='9')
        {
            for(int j=0;j<s.length();j++)
            {
                an*=10;
                an+=s[j]-'0';
            }
            if(an>=13)
            {
                ans+=a[1][an/13];
                f=true;
            }
            if(an%13>0)
            {
                if(f)
                    ans+=" ";
                ans+=a[0][an%13];
            }
            if(an==0)//等于0
                ans+=a[0][0];
            cout<<ans<<endl;
        }
        else
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==' ')
                {
                    for(k=1;k<13;k++)
                    {
                        if(a[1][k]==ans)
                            break;
                    }
                    an+=k*13;
                    ans="";
                }
                else
                {
                    ans+=s[j];
                }
            }
            for(k=0;k<13;k++)
            {
                if(a[0][k]==ans)
                    break;
                if(a[1][k]==ans)//两边都要注意13整数倍无个位的情况
                {
                    f=true;
                    break;
                }
            }
            if(f)
                an+=k*13;
            else
                an+=k;
            cout<<an<<endl;
        }
    }
    return 0;
}
