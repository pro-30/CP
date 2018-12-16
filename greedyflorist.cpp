#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
        ll i,n,k,j,factor=1,count1=0;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
          sort(a,a+n,greater<ll>());

      	cout<<endl;
         vector<pair<ll,ll> > g1;
         for(i=0;i<n;i++){
         	g1.pb(mp(a[i],factor));
          count1++;
         	if(count1==k){factor++;count1=0;}
         }
         ll sum=0;
         for(i=0;i<n;i++){
            sum=sum+g1[i].first*g1[i].second;
         }
         cout<<sum<<endl;

	return 0;}

