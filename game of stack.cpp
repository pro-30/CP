#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,m,x;
  cin>>n>>m>>x;
  int a[n],b[m];
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<m;i++){cin>>b[i];}
  stack<int>g1;
  stack<int>g2;
  for(int i=n-1;i>=0;i--){
    g1.push(a[i]);
  }

  for(int i=m-1;i>=0;i--){
    g2.push(b[i]);

  }

  int sum=0;
  int count=0;
  while(sum<x){

     if(g1.top()<=g2.top()){
        sum=sum+g1.top();
       g1.pop();
       count++;

     }
     else {
        sum=sum+g2.top();
       g2.pop();
       count++;
  }
      cout<<sum<<" ";
      if(sum>x){count--;break;}
  }
      cout<<count<<endl;


}


  return 0;}
