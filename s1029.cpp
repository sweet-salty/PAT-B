#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUEGE

    string s1,s2;
    cin>>s1>>s2;
    int p=0,q=0,a='a'-'A';
    vector<char> vec;
    while(p<s1.length())//����s1��󳤳��Ķ��ǻ���
    {
        if(s1[p]==s2[q])
        {
            p++;
            q++;
        }
        else
        {
            if(s1[p]>='a'&&s1[p]<='z')//������transformת��Ϊ��д
            {
                s1[p]=s1[p]-a;
            }
            if(count(vec.begin(),vec.end(),s1[p])==0)//vec��string��count�����ຯ��
            {
                vec.push_back(s1[p]);
                cout<<s1[p];
            }
            p++;
        }
    }
    cout<<endl;
    return 0;
}
