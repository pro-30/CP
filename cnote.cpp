#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    ll x,y,k,n,i;
    cin>>x>>y>>k>>n;
    vector<pair<ll,ll> > g1;
    for(i=0;i<n;i++){
    	ll x,y;
    	cin>>a>>b;
    	g1.pb(mp(b,a));
    }

    //sort(g1.begin(),g1.end());
    ll flag=0;
     for(i=0;i<n;i++){
     	if(g1[i].first<=k && g1[i].second>=x-y){flag=1;break;}
     	else{continue;}
     }
     if(flag==1)cout<<"LuckyChef"<<endl;
     else cout<<"UnluckyChef"<<endl;





    }



	return 0;
}