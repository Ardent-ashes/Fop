#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    int r[10001]={0};
    int m,carry1=0,carry2=0;
    scanf(" %s",s1);
    scanf(" %s",s2);
    int l1=0,l2=0;
    while(s1[l1]!=0)
    {
        l1++;
    }
     while(s2[l2]!=0)
    {
        l2++;
    }
    int x=0;
    int step=0;
    int primary;
    int scondary;
    for(int i=l1-1,j=l2-1;i>=0;i--,j--)
    {

      if(j>=0)
      {
        r[x]=(s1[i]-'0'+s2[j]-'0'+carry1)%10;
        carry1=(s1[i]-'0'+s2[j]-'0'+carry1)/10;
      }
      else
      {
        r[x]=(s1[i]-'0'-carry1)%10;
        carry1=(s1[i]-'0'+carry1)/10;
      }
      x++;
     }
    //r[step]=-1;
     for(int j=10000;j>=0;j--)
        {
            printf("%d",r[j]);
        }
}
