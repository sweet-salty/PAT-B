#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s[4];
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    map<char,string> mp={{'A',"MON"},{'B',"TUE"},{'C',"WED"},{'D',"THU"},{'E',"FRI"},{'F',"SAT"},{'G',"SUN"}};
    int len=s[0].length()<=s[1].length()?s[0].length():s[1].length(),j=0;
    for(int i=0;i<len;i++)
    {
        if(s[0][i]==s[1][i]&&((s[0][i]>='0'&&s[0][i]<='9')||(s[0][i]>='A'&&s[0][i]<='N')))
        {
            if(j==0&&(s[0][i]>='A'&&s[0][i]<='G'))
            {
                cout<<mp[s[0][i]]<<" ";
                j++;
            }
            else if(j>0&&((s[0][i]>='0'&&s[0][i]<='9')||(s[0][i]>='A'&&s[0][i]<='N')))
            {
                if(s[0][i]>='0'&&s[0][i]<='9')
                {
                    cout<<"0"<<s[0][i]<<":";
                }
                else
                {
                    cout<<s[0][i]-'A'+10<<":";
                }
                break;
            }
        }
    }
    len=s[2].length()<=s[3].length()?s[2].length():s[3].length(),j=0;
    for(int i=0;i<len;i++)
    {
        if(s[2][i]==s[3][i]&&((s[2][i]>='a'&&s[2][i]<='z')||(s[2][i]>='A'&&s[2][i]<='Z')))
        {
            if(i<10)
            {
                cout<<"0"<<i<<endl;
            }
            else
            {
                cout<<i<<endl;
            }
            break;
        }
    }
    return 0;
}
