#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int t,i=0;
    long a,b,c;
    cin>>t;
    while(cin>>a>>b>>c)
    {
        i++;
        cout<<"Case #"<<i<<": ";
        if(a+b>c)
            cout<<"true";
        else
            cout<<"false";
        if(i!=t)
            cout<<endl;
    }
    return 0;
}
