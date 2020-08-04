#include<bits/stdc++.h>
using namespace std;

const int maxn=100002;
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string s;
    cin>>s;
    long sum=0;
    int arr[maxn][2]={0};
    vector<int> a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
            a.push_back(i);
        if(i==0)
        {
            if(s[0]=='P')
                arr[0][0]=1;
            else
                arr[0][0]=0;
            if(s[0]=='T')//×¢Òâ·ÖÀà
                arr[0][1]=count(s.begin(),s.end(),'T')-1;
            else
                arr[0][1]=count(s.begin(),s.end(),'T');
        }
        else
        {
            if(s[i]=='A')
            {
                arr[i][0]=arr[i-1][0];
                arr[i][1]=arr[i-1][1];
            }
            else if(s[i]=='P')
            {
                arr[i][0]=arr[i-1][0]+1;
                arr[i][1]=arr[i-1][1];
            }
            else
            {
                arr[i][0]=arr[i-1][0];
                if(arr[i-1][1]>0)
                    arr[i][1]=arr[i-1][1]-1;
            }
        }
    }
    for(int i=0;i<a.size();i++)
    {
        sum+=arr[a[i]][0]*arr[a[i]][1];
    }
    cout<<sum%1000000007<<endl;
    return 0;
}
