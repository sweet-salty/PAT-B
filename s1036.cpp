#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUEGE

    int n;
    char c;
    cin>>n>>c;
    int a=(n%2==0?n/2:(n+1)/2);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==a-1)
            {
                cout<<c;
            }
            else if(j==0||j==n-1)
            {
                cout<<c;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
