#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
   string s1,s2;
   cin>>s1;
   cin>>s2;
   int l1=s1.length();
   int l2=s2.length();
  int  dp[l1+1][l2+1];
  for(int i=0;i<=l1;i++){
    dp[i][0]=i;
  }
  for(int j=0;j<=l2;j++){
    dp[0][j]=j;
  }
  for(int i=0;i<=l1;i++){
    for(int j=0;j<=l2;i++){
        if(s1[i]==s2[j]){dp[i][j]=dp[i-1][j-1];}
        else{dp[i][j]=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j]) +1 ;}
    }
  }
  cout<<dp[l1][l2]<<endl;



 }
  return 0;
}
