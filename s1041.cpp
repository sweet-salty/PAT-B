#include<bits/stdc++.h>
using namespace std;

struct Stu{
    string id;
    int a;
    int b;
};
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    map<int,Stu> mp;
    Stu s;
    int n,m,aa;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s.id>>s.a>>s.b;
        mp[s.a]=s;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>aa;
        cout<<mp[aa].id<<" "<<mp[aa].b<<endl;
    }
    return 0;
}
