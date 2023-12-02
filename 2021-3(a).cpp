#include<bits/stdc++.h>
using namespace std;
int isprime(int x)
{
    if(x==2)
    {
        return 1;
    }
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
  int n,i;
  cin>>n;
  int ara[n];
  vector<int> prime;
  for(int i=0;i<n;i++)
  {
    cin>>ara[i];
  }
  sort(ara,ara+n);
  int x;
  cin>>x;

  for(int i=2;i<=x;i++)
  {
        if(isprime(i)==1 && isprime(x/i)==1 && i*(x/i)==x)
        prime.push_back(i);
  }
    int total=1;
  for(int i=0;i<prime.size();i++)
  {
    total=total*prime[i];
  }
  int flag=0,sum=0;
  for(int i=0;i<n;i++)
  {

     int y=ara[i];
     for(int j=0;j<prime.size();j++)
    {

        while(y%prime[j]==0)
        {
            y=y/prime[j];

        }
    }
    if(y==1)
    {
        sum+=ara[i];
    }
  }
  cout<<sum;

}
