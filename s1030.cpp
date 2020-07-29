#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUEGE

    int n,p;
    cin>>n>>p;
    if(n==0)
        cout<<0<<endl;
    else
    {
        long a[n];//注意10^9
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        int m=0,x;
        for(int i=0;i<n;i++)
        {
            x=upper_bound(a+i,a+n,a[i]*p)-a;//超时用二分查找，upper大于指定数，lower大于等于
            if(m<x-i)
                m=x-i;
        }
        cout<<m<<endl;
    }
    return 0;
}
