#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int m=0,maxi=0;
    for(int i=0;i<l;i++)
    {
        for(int j=i+1,k=i;j<l,k>=0;j++,k--)
        {
            if(s[j]==s[k])
            {
                m++;
            }
        }
        maxi=max(maxi,m);
    }
    printf("%d",l-maxi*2);
}
20
