#include<bits/stdc++.h>
#include<algorithm>
/**#include <boost/lexical_cast/lexical_cast_old.hpp>**/
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 100000 
using namespace std;

ll a[MAX], n,q,i,count1=0;
vector<ll>g1;
 ll foo(ll hi, ll lo,ll x;){
    while(lo<hi){
      for(){

      }
      

    }


}

int main(){
   	int t;
   cin>>t;
   while(t--){
       cin>>n>>q;
     ll a[n];

     for(i=0;i<n;i++){cin>>a[i];}

     	sort(a,a+n);
        while(q--){
        	ll k;
        	cin>>k;
           for(i=0;i<n;i++){if(a[i]<k)g1.pb(a[i]);}
            count1+=n-g1.size();
            ll ans=foo(g1.size(),0,k);
            
        }


      }



   


	return 0;
}