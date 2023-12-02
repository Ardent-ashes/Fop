#include<stdio.h>
int main()
{
    char s[100];
    int n;
    int m,carry1=0,carry2=0;
    scanf(" %s",s);
    scanf(" %d",&n);
    int l1=0,l2=0;
    while(s[l1]!=0)
    {
        l1++;
    }
    int x=0;
    int r[100]={-1};
    int sum=0;
    int step=0;

    for(int i=0;i<l1;i++)
    {
    r[step]=(x*10+s[i]-'0')/n;
    x=(10*x+s[i]-'0')%n;
    step++;
    }
    //r[step]=-1;
     for(int j=0;j<step;j++)
        {
           printf("%d",r[j]);
        }
        printf("\n%d",x);

}
