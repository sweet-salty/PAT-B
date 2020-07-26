#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    int n;
    bool f[5];
    int t,asum=0,bsum=0,bi=0,cnum=0,di=0,emax=0;
    double dsum=0,d=0;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        f[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%5==0&&t%2==0){
            if(f[0]==false)
                f[0]=true;
            asum+=t;
        }
        else if(t%5==1){
            if(f[1]==false)
                f[1]=true;
            if(bi%2==0)
                bsum+=t;
            else
                bsum-=t;
            bi++;
        }
        else if(t%5==2){
            if(f[2]==false)
                f[2]=true;
            cnum++;
        }
        else if(t%5==3){
            if(f[3]==false)
                f[3]=true;
            dsum+=t;
            di++;
        }
        else if(t%5==4){
            if(f[4]==false)
                f[4]=true;
            if(t>emax)
                emax=t;
            //cin>>emax;
        }
    }
    for(int i=0;i<5;i++){
        if(!f[i])
            cout<<"N";
        else
        {
            switch(i){
                case 0:cout<<asum;break;
                case 1:cout<<bsum;break;
                case 2:cout<<cnum;break;
                case 3:d=dsum/di;printf("%.1f",d);break;
                case 4:cout<<emax;break;
            }
        }
        if(i<4)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
