#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned long long

#define MAX 1000000007
#define INF 1000000007
using namespace std;

ll MOD 1000000007;
ll f[100001];
 
ll pow(ll a, ll b, ll MOD)
{
 ll x=1,y=a; 
 while(b > 0)
 	{
 		if(b%2 == 1)
 	{
 		x=(x*y);
 		if(x>MOD) x%=MOD;
 	}
 	y = (y*y);
 	if(y>MOD) y%=MOD; 
 	b /= 2;
 	}
 return x;
}
 
/* Modular Multiplicative Inverse
 Using Euler's Theorem
 a^(phi(m)) = 1 (mod m)
 a^(-1) = a^(m-2) (mod m) */
ll InverseEuler(ll n, ll MOD)
{
 return pow(n,MOD-2,MOD);
}
 
ll C(ll n, ll r, ll MOD)
{
 
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
  ull powMod(ull n){

  	ull ret=1;
  	ull a=2;
  	while(n>0){
  		if(n&1){ret = ret * a % MAX;}
  	    a=a * a %MAX ;
  	    n>>=1;

  	}
  	return ret ;
  }

int main(){
  int t;
  cin>>t;
  f[0] = 1;
	for(int i = 1 ; i <= 100000 ; i++)
		f[i] = (f[i-1]*i)%INF;

  while(t--){
     int n,i;
     cin>>n;
      int a[n];
      for(i=0;i<n;i++)cin>>a[i];

     ll sum=0;
 sum=sum+powMod(n-1);
 sort(a,a+n);
  ll sum2=0;
  ll j=0;
 for(i=0;i<n-1;i++){
 	if(a[i]==a[i+1]){ if(j==0){ sum2=2*sum2+ C(i,0,MOD)*C(n-i-1,0,MOD); j++; }
                      else{ sum2=2*sum2 + C(i,j,MOD)*C(n-i-1,j,MOD); j++ ;}

 	              }
 }
 cout<<sum+sum2<<endl;

    










  }


	return 0;
}
