#include<bits/stdc++.h>
using namespace std;

const int maxn=15;
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int a[3],b[3],c[3];
    long la,lb,lc;
    char sa[maxn],sb[maxn];
    cin>>sa>>sb;
    sscanf(sa,"%d.%d.%d",&a[0],&a[1],&a[2]);
    sscanf(sb,"%d.%d.%d",&b[0],&b[1],&b[2]);
    la=a[0]*17*29+a[1]*29+a[2];
    lb=b[0]*17*29+b[1]*29+b[2];
    lc=lb-la;
    if(lc<0)
    {
        cout<<"-";
        lc*=-1;
    }
    c[2]=lc%29;
    c[1]=lc/29%17;
    c[0]=lc/29/17;
    printf("%ld.%ld.%ld",c[0],c[1],c[2]);
    return 0;
}
