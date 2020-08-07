#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,a,b,c,d,j=0,y=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(b!=d)
        {
            if(a+c==b)
            {
                y++;
            }
            else if(a+c==d)
            {
                j++;
            }
        }
    }
    cout<<j<<" "<<y<<endl;
    return 0;
}
