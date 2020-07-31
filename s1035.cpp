#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n,p,q,k=1;
    cin>>n;
    bool f=false;
    int arr[n],pro[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>pro[i];
    }
    for(p=0;p<n-1&&pro[p+1]>=pro[p];p++);//最后一个有序的
    for(q=p+1;q<n&&pro[q]==arr[q];q++);//无序数列最后一个相等的
    if(q==n)
    {
        cout<<"Insertion Sort"<<endl;
        sort(pro,pro+p+2);
        for(int i=0;i<n;i++)
        {
            cout<<pro[i];
            if(i+1<n)
                cout<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Merge Sort"<<endl;
        while(!f)
        {
            f=true;
            for(int i=0;i<n;i++)//全相等则找到位置，再来一次就可以
            {
                if(arr[i]!=pro[i])
                    f=false;
            }

            k*=2;
            for(int i=0;i<n/k;i++)
            {
                sort(arr+i*k,arr+(i+1)*k);
            }
            sort(arr+n/k*k,arr+n);
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
            if(i+1<n)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
