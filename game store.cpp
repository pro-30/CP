#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 100000
using namespace std;
bool fun(const pair<pair<ll,ll>,pair<ll,ll> > &a,
              const pair<pair<ll,ll>,pair<ll,ll> > &b)
{

    if(a.first.first!=b.first.first)return (a.first.first<b.first.first);
    else{
         if(a.first.second!=b.first.second)return (a.first.second>b.first.second);
         else return (a.second.first<b.second.first);
    }
}
int main(){
	 ll n,i;
	 cin>>n;
	 vector<pair<pair<ll,ll>,pair<ll,ll> > >g1;
	 for(i=0;i<n;i++){
	 	ll x,y,z;
	 	cin>>x>>y>>z;
	 	g1.pb(mp(mp(x,y),mp(z,i+1)));
	 }
    /* cout<<"BEFORE SORTING:"<<endl;
     for(i=0;i<n;i++){
        cout<<g1[i].first.first<<" "<<g1[i].first.second<<" "<<g1[i].second.first<<" "<<g1[i].second.second<<endl;
     }*/
      sort(g1.begin(),g1.end(),fun);
  /*    cout<<"AFTER SORTING : "<<cout<<endl;
  for(i=0;i<n;i++){
        cout<<g1[i].first.first<<" "<<g1[i].first.second<<" "<<g1[i].second.first<<" "<<g1[i].second.second<<endl;
     }*/
     if(n>1){
         cout<<"Easiest is level "<<g1[n-1].second.second<<endl;
         cout<<"Hardest is level "<<g1[0].second.second<<endl;
     }
     else{ cout<<"Easiest and Hardest is level 1"<<endl;}


	return 0;
}
