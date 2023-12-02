#include<stdio.h>
long long modpower(int x, int n, int m)
{
    if(n==0)
    {
        return 1%m;
    }
    long long int u=modpower(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1)
    {
        u=(u*x)%m;
    }

        return u;

}
int main()
{
        int x,n,m;
        scanf("%d %d %d",&x,&n,&m);
        printf("%lld\n",modpower(x,n,m));
}
