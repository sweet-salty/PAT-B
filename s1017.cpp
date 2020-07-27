#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string a;
    int b,len;
    cin>>a>>b;
    len=a.length();
    int t=0;
    bool f=false;
    for(int i=0;i<len;i++)
    {
        t*=10;
        t+=a[i]-'0';
        if(t>=b)
        {
            cout<<t/b;
            t=t%b;
            f=true;
        }
        else if(f)
        {
            cout<<0;
        }
    }
    if(!f)
        cout<<0;
    cout<<" "<<t<<endl;
    return 0;
}
