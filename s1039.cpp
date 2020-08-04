#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s1,s2;
    cin>>s1>>s2;
    int n=0;
    for(int i=0;i<s2.length();i++)
    {
        if(s1.find(s2[i])==string::npos)
        {
            n++;
        }
        else
        {
            s1.erase(s1.begin()+s1.find(s2[i]));//erase删除单个元素为迭代器begin+
        }
    }
    if(n>0)
    {
        cout<<"No "<<n<<endl;
    }
    else
    {
        cout<<"Yes "<<s1.length()<<endl;
    }
    return 0;
}
