#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
   int dp[n+1];
   for(i=0;i<=n;i++){dp[i]=0;}
    int m;
    cin>>m;
    int coins[m];

    for(i=0;i<m;i++){
      cin>>coins[i];
      dp[coins[i]]=dp[coins[i]]+1;
    }
  int min=coins[0];
  for(i=1;i<m;i++){
    if(coins[i]<min){
      min=coins[i];
    }
  }
  for(i=min;i<n+1;i++){
    dp[i]=dp[i]+dp[i-1];
  }
cout<<dp[n]<<endl;


  return 0;
}
