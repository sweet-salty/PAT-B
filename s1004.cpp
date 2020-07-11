#include<bits/stdc++.h>
using namespace std;

typedef struct Student{
    string name;
    string id;
    int grade;
}Stu;

bool cmp(Stu s1,Stu s2)
{
    return s1.grade>s2.grade;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDG
    int n;
    vector<Stu> stus;
    Stu p;
    cin>>n;
    string na,id;
    int g;
    for(int i=0;i<n;i++)
    {
        cin>>na>>id>>g;
        p.name=na;
        p.id=id;
        p.grade=g;
        stus.push_back(p);
    }
    sort(stus.begin(),stus.end(),cmp);//可以不用排序，寻找最大最小即可
    cout<<stus[0].name<<" "<<stus[0].id<<endl;
    cout<<stus[n-1].name<<" "<<stus[n-1].id<<endl;
    return 0;
}
