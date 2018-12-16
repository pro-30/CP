#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++){
  cin>>a[i];
}
sort(a,a+n);
int count=0,ptr1=0,ptr=1;
while(ptr1<n || ptr2<n){
  if(a[ptr2]-a[ptr1] <4){ ptr2++;}
  else if(a[ptr2]-a[ptr1]>4){ptr1++;count++;}
  else if(a[ptr2]-a[ptr1]==4){ ptr2++;ptr++;count++;}
}
cout<<count<<endl;



  return 0;}
