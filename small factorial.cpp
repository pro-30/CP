#include <bits/stdc++.h>
using namespace std;

int a[200];

int main() {
       int n,countv=0,temp,x,t;
       cin>>t;
       while(t--)
       {
              cin>>n;
              a[0]=1;
              countv=1;
              for(int i=2;i<=n;++i)
              {
                     temp=0;
                     for(int j=0;j<countv;++j)
                     {
                            x=a[j]*i+temp;
                            a[j]=x%10;
                            temp=x/10;
                     }
                     while(temp>0)
                     {
                            a[countv++]=temp%10;
                            temp/=10;
                     }
              }
              for(int i=countv-1;i>=0;--i)
                     cout<<a[i];
              cout<<endl;
       }
       return 0;
}
