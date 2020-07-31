#include<bits/stdc++.h>
using namespace std;

const int maxn=102;
struct Data{
    long long f;
    long long zheng;
    long long zi;//注意范围int*int得longlong
    long long mu;
};
long long gcd(long long a,long long b)//辗转相除法求最大公约数
{
    return !b?a:gcd(b,a%b);
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    char s1[maxn],s2[maxn];
    long long p;
    Data d[2];
    Data r[4];
    char ch[4]={'+','-','*','/'};
    scanf("%s%s",s1,s2);
    if(s1[0]=='-')
    {
        d[0].f=-1;
    }
    else
    {
        d[0].f=1;
    }
    if(s2[0]=='-')
    {
        d[1].f=-1;
    }
    else
    {
        d[1].f=1;
    }
    sscanf(s1,"%lld/%lld",&d[0].zi,&d[0].mu);//sscanf直接符号-数字，还可以有格式
    if(d[0].zi<0)
        d[0].zi*=-1;
    sscanf(s2,"%lld/%lld",&d[1].zi,&d[1].mu);
    if(d[1].zi<0)
        d[1].zi*=-1;
    for(int i=0;i<2;i++)
    {
        if(d[i].zi!=0&&d[i].mu!=0)
        {
            p=gcd(d[i].zi,d[i].mu);
            d[i].zi/=p;
            d[i].mu/=p;
        }
    }
    long long m=gcd(d[1].mu,d[0].mu);
    long long n=d[1].mu/m*d[0].mu;//最小公倍数a/d*b
    d[0].zi*=n/d[0].mu;
    d[0].mu=n;
    d[1].zi*=n/d[1].mu;
    d[1].mu=n;
    //cout<<d[0].zi<<d[0].mu<<d[1].zi<<d[1].mu<<endl;

    r[0].zi=d[0].f*d[0].zi+d[1].f*d[1].zi;
    r[0].mu=n;
    r[1].zi=d[0].f*d[0].zi-d[1].f*d[1].zi;
    r[1].mu=n;

    r[2].zi=d[0].f*d[0].zi*d[1].f*d[1].zi;
    r[2].mu=n*n;

    r[3].zi=d[0].f*d[0].zi*d[1].f;
    r[3].mu=d[1].zi;

    //cout<<r[0].zi<<r[1].zi<<r[2].zi<<r[3].zi<<endl;
    for(int i=0;i<4;i++)
    {
        if(r[i].zi<0)
        {
            r[i].f=-1;
            r[i].zi*=-1;
        }
        else
            r[i].f=1;
        //cout<<r[0].zi<<r[0].mu<<endl;
        if(r[i].mu!=0)
        {
            r[i].zheng=r[i].zi/r[i].mu;
            r[i].zi%=r[i].mu;
            //cout<<r[0].zheng<<r[0].zi<<endl;
        }
        if(r[i].zi!=0&&r[i].mu!=0)
        {
            p=gcd(r[i].zi,r[i].mu);
            r[i].zi/=p;
            r[i].mu/=p;
        }
    }
    for(int i=0;i<2;i++)
    {
        if(d[i].mu!=0)
        {
            d[i].zheng=d[i].zi/d[i].mu;
            d[i].zi%=d[i].mu;
        }
        if(d[i].zi!=0&&d[i].mu!=0)
        {
            p=gcd(d[i].zi,d[i].mu);
            d[i].zi/=p;
            d[i].mu/=p;
        }
    }
    //cout<<d[0].zi<<d[0].mu<<d[1].zi<<d[1].mu<<endl;
    for(int i=0;i<4;i++)
    {
        if(d[0].zi==0&&d[0].zheng==0)
            printf("%lld",d[0].zi);
        else if(d[0].zi==0&&d[0].zheng>0&&d[0].f==1)
            printf("%d",d[0].zheng);
        else if(d[0].zi==0&&d[0].zheng>0&&d[0].f==-1)
            printf("(%lld)",d[0].zheng*d[0].f);
        else if(d[0].zheng==0&&d[0].f==1)
            printf("%lld/%lld",d[0].zi,d[0].mu);
        else if(d[0].zheng>0&&d[0].f==1)
            printf("%lld %lld/%lld",d[0].zheng,d[0].zi,d[0].mu);
        else if(d[0].zheng==0&&d[0].f==-1)
            printf("(%lld/%lld)",d[0].zi*d[0].f,d[0].mu);
        else
            printf("(%lld %lld/%lld)",d[0].zheng*d[0].f,d[0].zi,d[0].mu);

        printf(" %c ",ch[i]);
        if(d[1].zi==0&&d[1].zheng==0)
            printf("%lld",d[1].zi);
        else if(d[1].zi==0&&d[1].zheng>0&&d[1].f==1)
            printf("%lld",d[1].zheng);
        else if(d[1].zi==0&&d[1].zheng>0&&d[1].f==-1)
            printf("(%lld)",d[1].zheng*d[1].f);
        else if(d[1].zheng==0&&d[1].f==1)
            printf("%lld/%lld",d[1].zi,d[1].mu);
        else if(d[1].zheng>0&&d[1].f==1)
            printf("%lld %lld/%lld",d[1].zheng,d[1].zi,d[1].mu);
        else if(d[1].zheng==0&&d[1].f==-1)
            printf("(%lld/%lld)",d[1].zi*d[1].f,d[1].mu);
        else
            printf("(%lld %lld/%lld)",d[1].zheng*d[1].f,d[1].zi,d[1].mu);

        printf(" = ");
        if(r[i].zi==0&&r[i].zheng==0)
            printf("%lld",r[i].zi);
        else if(r[i].mu==0)
            printf("Inf");
        else if(r[i].zi==0&&r[i].zheng>0&&r[i].f==1)
            printf("%lld",r[i].zheng);
        else if(r[i].zi==0&&r[i].zheng>0&&r[i].f==-1)
            printf("(%lld)",r[i].zheng*r[i].f);
        else if(r[i].zheng==0&&r[i].f==1)
            printf("%lld/%lld",r[i].zi,r[i].mu);
        else if(r[i].zheng>0&&r[i].f==1)
            printf("%lld %lld/%lld",r[i].zheng,r[i].zi,r[i].mu);
        else if(r[i].zheng==0&&r[i].f==-1)
            printf("(%lld/%lld)",r[i].zi*r[i].f,r[i].mu);
        else
            printf("(%lld %lld/%lld)",r[i].zheng*r[i].f,r[i].zi,r[i].mu);
        printf("\n");
    }
    return 0;
}
