#include<bits/stdc++.h>
using namespace std;

void sorting(int ara[],int n)
{
    sort(ara,ara+n);

     for(int i=0;i<n;i++)
    {
       printf("%d ",ara[i]);
    }
    printf("\n");


    if((n)%2==0)
    {
        int x;
        x=(ara[(n)/2-1]+ara[(n)/2])/2;
        printf("x sort %d \n",x);
    }


    else
    printf("y sort %d \n",ara[(n+1)/2-1]);


}
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }


     for(int i=0;i<n;i++)
    {
        sorting(ara,i+1);
    }


}
