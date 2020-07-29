#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,a=3,sum=1,s;
    char ch;
    cin>>n>>ch;
    while(sum+2*a<n)
    {
        sum+=2*a;
        a+=2;
    }
    if(sum+2*a==n)
    {
        s=0;
        a+=2;
    }
    else
        s=n-sum;
    for(int i=0;i<a-2;i++)
    {
        for(int j=0;j<(i<=(a-2)/2?a-2-i:i+1);j++)//一定注意不打印右边空格
        {
            if(i<=(a-2)/2&&j>=i)
            {
                cout<<ch;
            }
            else if(i>(a-2)/2&&j>=a-3-i)
            {
                cout<<ch;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<s<<endl;
    return 0;
}
