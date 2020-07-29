#include<bits/stdc++.h>
using namespace std;

struct People{
    string name;
    int year;
    int month;
    int day;
};
bool judge(int y,int m,int d)
{
    if(y<2014-200)
        return false;
    else if((y==2014-200&&m<9)||(y==2014-200&&m==9&&d<6))
        return false;
    else if(y>2014||(y==2014&&m>9)||(y==2014&&m==9&&d>6))
        return false;
    else
        return true;
}
bool cmp(People p1,People p2)
{
    if(p1.year!=p2.year)
        return p1.year>p2.year;
    else
    {
        if(p1.month!=p2.month)
            return p1.month>p2.month;
        else
            return p1.day>p2.day;
    }
}
int get(string s)
{
    int a=0;
    for(int i=0;i<s.length();i++)
    {
        a*=10;
        a+=s[i]-'0';
    }
    return a;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;
    string na,da;
    int y,m,d,i=0;
    cin>>n;
    People pe;
    vector<People> P;
    while(cin>>na>>da)
    {
        y=get(da.substr(0,4));
        m=get(da.substr(5,2));
        d=get(da.substr(8,2));
        if(judge(y,m,d))
        {
            pe.name=na;
            pe.year=y;
            pe.month=m;
            pe.day=d;
            P.push_back(pe);
            i++;
        }
    }
    n=i;
    cout<<n;
    if(n!=0)//¿ÉÄÜÎª0
    {
        sort(P.begin(),P.end(),cmp);
        cout<<" "<<P[n-1].name;
        cout<<" "<<P[0].name<<endl;
    }
    return 0;
}
