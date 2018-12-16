#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
 double min_prob(ll n, ll k ){
    ll removed=0;
    while(true){
           if(n<=1)return 1;

           if(k==0)return 1/(double)n;

           ll remain=0;
           if(removed>0 || n%2 !=0){
           	 remain=(n+1)/2; }

           	else{ ll big_half=n/2;

           		 if(big_half%2 ==0)remain=big_half ;

           		 else{remain=big_half + 1 ;}

           	}
           	removed=removed+n-remain ;
                 n=remain;
                 k-- ;
    }

 }


int main(){
int t;
cin>>t;
while(t--){
  ll n,k;
  cin>>n;
  cin>>k;
   double ans=min_prob(n,k);

 cout<<fixed<<setprecision(6)<<ans<<endl;




}


	return 0;
}
