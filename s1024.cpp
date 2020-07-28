#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    bool f1=false,f2=false;
    char ch;
    int exp=0,i;
    vector<char> coe;
    cin>>ch;
    if(ch=='+')
        f1=true;
    while((cin>>ch)&&ch!='E')
    {
        if(ch!='.')
        {
            coe.push_back(ch);
        }
    }
    cin>>ch;
    if(ch=='+')
        f2=true;
    while(cin>>ch)
    {
        exp*=10;
        exp+=ch-'0';
    }
    if(!f1)
        cout<<"-";
    if(exp==0)
    {
        for(i=0;i<coe.size();i++)
        {
            if(i==1)
            {
                cout<<".";
            }
            cout<<coe[i];
        }
    }
    else if(f2)//注意条件的写法
    {
        for(i=0;i<exp+1;i++)
        {
            if(i<coe.size())
                cout<<coe[i];
            else
                cout<<"0";
        }
        if(i<coe.size())
            cout<<".";
        for(i;i<coe.size();i++)
            cout<<coe[i];
    }
    else
    {
        cout<<"0.";
        for(i=0;i<exp-1;i++)
        {
            cout<<"0";
        }
        for(i=0;i<coe.size();i++)
        {
            cout<<coe[i];
        }
    }
    cout<<endl;
    return 0;
}
