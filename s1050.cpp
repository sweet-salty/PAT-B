#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int a,n,m,p;
    cin>>a;
    for(p=sqrt(a);p>=1;p++)
    {
        if(a%p==0)
            break;
    }
    m=max(p,a/p);
    n=a/m;
    int mar[m][n],arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a,cmp);
    int k=0;
    for(int i=0;i<n/2;i++)//不等于n/2
    {
        for(int j=i;j<n-1-i;j++)
        {
            mar[i][j]=arr[k++];
        }
        for(int j=i;j<m-1-i;j++)
        {
            mar[j][n-i-1]=arr[k++];
        }
        for(int j=n-1-i;j>=i+1;j--)
        {
            mar[m-1-i][j]=arr[k++];
        }
        for(int j=m-1-i;j>=i+1;j--)
        {
            mar[j][i]=arr[k++];
        }
    }
    if(n%2==1)//奇数列需要补空白
    {
        for(int i=n/2;i<m-n/2;i++)//一列，从n/2~m-n/2
        {
            mar[i][n/2]=arr[k++];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mar[i][j];
            if(j+1<n)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
