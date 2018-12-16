
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,n3,sum1=0,sum2=0,sum3=0;
  cin>>n1>>n2>>n3;
  stack<int>a;
  stack<int>b;
  stack<int>c
  for(int i=0;i<n1;i++){
    int k;cin>>k;
    a.push(k);
    sum1=sum1+k;
  }
  for(int i=0;i<n2;i++){
    int k;cin>>k;
    b.push(k);
    sum2=sum2+k;
  }
  for(int i=0;i<n3;i++){
    int k;cin>>k;
    c.push(k);
    sum3=sum3+k;
  }
  while(sum1!=sum2 && sum2!=sum3 && sum1!=sum3){
    if(sum1>sum2 || sum1>sum3){ sum1=sum1-a.top(); a.pop();}
    if(sum2>sum2 || sum2>sum3){ sum2=sum2-b.top(); b.pop();}
    if(sum3>sum1 || sum1>sum3){ sum2=sum2-c.top(); c.pop();}
  }
  cout<<sum1<<endl;






  return 0;
}
