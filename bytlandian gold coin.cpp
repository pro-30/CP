#include <bits/stdc++.h>

using namespace std;
map<int,long long>dp;

inline long long coins(int n){
   if(n==0){
     return 0; }
     if(dp[n]!=0){
       return dp[n];
     }
     long long temp=coins(n/2)+coins(n/3)+coins(n/4);
     if(temp>n){
       dp[n]=temp;
     }
     else{
       dp[n]=n;
     }

    return dp[n];
  }
int main() {
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n;
  while(cin>>n == 1){
    cout<<coins(n);
  }


	return 0;
}
