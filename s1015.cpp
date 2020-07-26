#include<bits/stdc++.h>
using namespace std;

struct stu{
    string id;
    int de;
    int cai;
    int zong;
    int flag;
    stu()
    {
        id="";
        de=0;
        cai=0;
        zong=0;
        flag=0;
    }
};
bool cmp(stu t1,stu t2)
{
    return t1.flag!=t2.flag?t1.flag<t2.flag:(t1.zong!=t2.zong?t1.zong>t2.zong:(t1.de!=t2.de?t1.de>t2.de:t1.id<t2.id));
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,l,h,num=0;
    stu ts;
    vector<stu> s;
    cin>>n>>l>>h;
    for(int i=0;i<n;i++)
    {
        //scanf("%s %d %d",ts.id,&ts.de,&ts.cai);
        cin>>ts.id;//>>ts.de>>ts.cai;
        scanf("%d %d",&ts.de,&ts.cai);//³¬Ê±¿ÉÒÔ³¢ÊÔscanf
        ts.zong=ts.de+ts.cai;
        if(ts.de>=l&&ts.cai>=l)
        {
            if(ts.de>=h&&ts.cai>=h)
            {
                ts.flag=1;
                s.push_back(ts);
            }
            else if(ts.de>=h)
            {
                ts.flag=2;
                s.push_back(ts);
            }
            else if(ts.de>=ts.cai)
            {
                ts.flag=3;
                s.push_back(ts);
            }
            else
            {
                ts.flag=4;
                s.push_back(ts);
            }
            num++;
        }
    }
    cout<<num<<endl;
    sort(s.begin(),s.end(),cmp);
    for(int j=0;j<s.size();j++)
    {
        cout<<s[j].id<<" "<<s[j].de<<" "<<s[j].cai<<endl;
    }
    return 0;
}
