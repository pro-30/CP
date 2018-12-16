#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
int a[n];int sum=0;
for(int i=0;i<n;i++){
  cin>>a[i];
  sum=sum+a[i];
}
sum=sum-a[k];
int x;
cin>>x;
int bill = sum/2 ;
if(x>bill){cout<<x-bill<<endl;}
else{cout<<"Bon Appetit "<<endl;}




  return 0;
}
