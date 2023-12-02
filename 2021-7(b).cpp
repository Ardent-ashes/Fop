#include<bits/stdc++.h>
using namespace std;
void rev(int start, int e, char s[])
{
    for(int i=e;i>=start;i--)
    {
        printf("%c",s[i]);
    }
    printf(" ");
    return;
}


int main()
{
    char s[1000];
   scanf("%[^\n]s",s);
   int i=0;
    int start=i;

    while(s[i]!='\0')
    {

        if(s[i]==' ')
        {
            rev(start, i-1, s);
            start=i+1;
        }

        i++;
    }
     rev(start,i,s);
}
