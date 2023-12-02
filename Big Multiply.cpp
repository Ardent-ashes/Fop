Multiply 2 big int

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
    for(int i=l2-1;i>=0;i--)
    {

        x=step;
        for(int j=l1-1;j>=0;j--)
        {
            m=(s1[j]-'0')*(s2[i]-'0');
            primary=(m+carry1)%10;
            int y=r[x];

            r[x]=(carry2+y+primary)%10;
            //printf("carry1 %d carry2 %d step %d ara%d %d\n",carry1,carry2,step,x,r[x]);
            carry1=(m+carry1)/10;
            carry2=(carry2+y+primary)/10;
           // carry2=(r[x]+primary)/10;
            x++;

        }
       // printf("%d\n",carry1);
        r[x]=carry1+carry2;
        carry1=0;
        carry2=0;
        x++;

         step++;
         //carry=0;

    }
    r[x-1]=-1;
     for(int j=10000;j>=0;j--)
        {

            if(r[j]==-1)
            {
                j--;
                step=0;
                while(j>=0)
                {

                     if(step==0 && r[j]=='0')
                     {
                        continue;
                     }
                     else
                     {
                         printf("%d",r[j]);
                     }

                     step++;
                     j--;
                }
                return 0;

            }

        }

}
