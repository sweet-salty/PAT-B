#include<bits/stdc++.h>
using namespace std;

int get(int n)
{
    int a[4],ans=0;
    for(int i=0;i<4;i++)
    {
        a[4-i-1]=n%10;
        n/=10;
    }
    sort(a,a+4);
    for(int i=0;i<4;i++)
    {
        ans*=10;
        ans+=a[i];
    }
    return ans;
}
int Reverse(int n)
{
    int a=0,i=0;
    while(n>0)
    {
        a*=10;
        a+=n%10;
        n/=10;
        i++;
    }
    while(i<4)//降序补0
    {
        a*=10;
        i++;
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
    cin>>n;
    int a=get(n),t=0;//t=0保证不会第一个就6174不输出
    if(Reverse(a)-a==0)
        cout<<a<<" - "<<a<<" = "<<"0000"<<endl;
    else
    {
        while(t!=6174)
        {
            printf("%04d - %04d = %04d\n",Reverse(a),a,Reverse(a)-a);
            t=Reverse(a)-a;
            a=get(t);
        }

    }
    return 0;
}
