#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;
    cin>>n;
    long double a[n];
    long double sum=0;//double * double 用longdouble
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i]*(i+1)*(n-i);
    }
    printf("%.2llf\n",sum);//llf lf不正确
    return 0;
}
