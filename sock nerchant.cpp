#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  map<int,int>m1;
  for(int i=0;i<n;i++){
    m1[a[i]]++;
  }
  int pairs=0;
  for(map<int,int>::iterator it=m1.begin();it!=m1.end();it++){
     sum=sum+(it->second)/2;
  }
  cout<<sum<endl;

  return 0;
}
