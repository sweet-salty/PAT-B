#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,a,b,c;
    cin>>n;
    string s;
    c=n%10;
    n/=10;
    b=n%10;
    a=n/10;
    for(int i=0;i<a;i++)
        s+='B';
    for(int i=0;i<b;i++)
        s+='S';
    for(int i=0;i<c;i++)
        s+=('0'+i+1);
    cout<<s<<endl;
    return 0;
}
