#include<bits/stdc++.h>
using namespace std;

bool findp(int n)
{
    if(n==1||n==2)
        return true;
    int tmp=(int)(sqrt(n));//注意一定循环到开方就停
    for(int i=2;i<=tmp;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int n,num=0;
    cin>>n;
    //有时候不要老想map,直接可以利用数字
    for(int i=3;i<=n-2;i++)
    {
        if(findp(i)&&findp(i+2))
            num++;
    }
    cout<<num<<endl;
    return 0;
}
