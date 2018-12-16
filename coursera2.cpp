#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long x=0;
int main()
{
  stack<long long >g1;
  stack<long long>g2;
  g2.push(0);
  long long  n;
  cin>>n;

  for(long long  i=0;i<n;i++){
    string  s;
    cin>>s;
    int l=s.size();
    //cout<<l<<" "<<s[0]<<endl;
    if(l>=4){
         cin>>x;
          //cout<<x<<endl;

        if(x>=g2.top()){g2.push(x);}
         g1.push(x);
        // cout<<g1.top()<<'\n'<<x<<endl;
    }
    else if(l<4 && s[0]=='p' && g1.size()!=0){if(g1.top()==g2.top()){g2.pop();}
                                    g1.pop();}
     else if(l<4 && s[0]=='m' ) {cout<<g2.top()<<'\n';}

  }

    return 0;
}
