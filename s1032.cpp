#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,x,y;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[x]+=y;
    }
    int m=0;
    for(int i=0;i<n+1;i++)
    {
        if(a[i]>a[m])
        {
            m=i;
        }
    }
    cout<<m<<" "<<a[m]<<endl;
    return 0;
}
