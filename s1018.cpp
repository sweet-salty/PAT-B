#include<bits/stdc++.h>
using namespace std;

int judge(char x,char y)
{
    if(x==y)
        return 0;
    else if((x=='J'&&y=='B')||(x=='B'&&y=='C')||(x=='C'&&y=='J'))
        return 1;
    else
        return 2;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    int ga[3]={0},gb[3]={0};//bcj
    map<char,int> ma={{'B',0},{'C',0},{'J',0}},mb={{'B',0},{'C',0},{'J',0}};
    char x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(judge(x,y)==0)
        {
            ga[1]++;
            gb[1]++;
        }
        else if(judge(x,y)==1)
        {
            ga[0]++;
            gb[2]++;
            ma[x]++;
        }
        else
        {
            gb[0]++;
            ga[2]++;
            mb[y]++;
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<ga[i];
        if(i+1!=3)
            cout<<" ";
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<gb[i];
        if(i+1!=3)
            cout<<" ";
    }
    cout<<endl;
    int maxn=0;
    map<char,int>::iterator it;
    for(it=ma.begin();it!=ma.end();it++)
    {
        if(it->second>maxn)
            maxn=it->second;
    }
    for(it=ma.begin();it!=ma.end();it++)
    {
        if(it->second==maxn){
            cout<<it->first;
            break;
        }
    }
    cout<<" ";
    maxn=0;
    for(it=mb.begin();it!=mb.end();it++)
    {
        if(it->second>maxn)
            maxn=it->second;
    }
    for(it=mb.begin();it!=mb.end();it++)
    {
        if(it->second==maxn)
        {
            cout<<it->first;
            break;
        }
    }
    cout<<endl;
    return 0;
}
