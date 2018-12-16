#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  int ans=0;
  int sum,length;
  cin>>sum;
  cin>>length;
  int sum_current=0;
  for(int i=0;i<n-lnegth+1;i++){
    for(int j=i;j<i+length;j++){
       sum_current=sum_current+a[j];}
       if(sum_current==sum){ans++;}

  }
cout<<ans<<endl;
  return 0;
}
