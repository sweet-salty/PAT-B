#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifdef ONLINE_JUDGE
#else
    freopen("1001.txt","r",stdin);
#endif // ONLINE_JUDGE
    int n,cnt=0;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
            n/=2;
        else
        {
            n=(3*n+1)/2;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
