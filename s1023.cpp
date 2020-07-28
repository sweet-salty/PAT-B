#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int a[10],i;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<10;i++)
    {
        if(a[i]>0)
        {
            cout<<i;
            a[i]--;
            break;
        }
    }
    if(i==10)
    {
        cout<<0<<endl;
    }
    else
    {
        for(i=0;i<10;i++)
        {
            while(a[i]>0)
            {
                cout<<i;
                a[i]--;
            }
        }
        cout<<endl;
    }
    return 0;
}
