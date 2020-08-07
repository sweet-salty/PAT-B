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
    int a[n],b[n],max=0;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);//排序后位置不变，并且前都小于它就可以
    for(int i=0;i<n;i++)
    {
        if(b[i]==a[i]&&a[i]>max)
            vec.push_back(a[i]);
        if(a[i]>max)
            max=a[i];
    }
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        printf("%d",vec[i]);
        if(i+1!=vec.size())
        {
            printf(" ");
        }
    }
    cout<<endl;
    return 0;
}
