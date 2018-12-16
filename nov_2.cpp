#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
#define MAX 26
using namespace std;

int main(){
   int t;
   cin>>t;
   ll num[MAX],i;
   num[0]=1;
   num[1]=1;
    for(i=2;i<=25;i++){
      num[i]=num[i-1]+2*num[i-2];
    }

   while(t--){
      int n;
      cin>>n;
      ll den=pow(2,n);
      cout<<num[n-1]<<" "<<den<<" ";


   }


  return 0;
}
