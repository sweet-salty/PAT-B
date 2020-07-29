#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUEGE

    int a,b,c;
    cin>>a>>b;
    c=b-a;
    if(c%100<50)
        c=c/100;
    else
        c=c/100+1;
    printf("%02d",c/3600);
    c%=3600;
    printf(":%02d",c/60);
    c%=60;
    printf(":%02d\n",c);
    return 0;
}
