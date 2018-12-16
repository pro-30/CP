#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
 ll next_bs(ll a[],ll lo,ll hi,ll x){
 	while(lo<=hi){
 		ll mid = l + (h-l) / 2 ;
 	    if(a[mid]>=x && a[mid-1]<x)return mid;
 	    if(a[mid]<x)l=mid+1;
 	    else h = mid - 1 ;
 	}
 	
 }
int main(){
       ll n,k;
       cin>>n>>k;
       ll a[n];
       for(i=0;i<n;i++)cin>>a[i];
       sort(a,a+n);
      





	return 0;
}