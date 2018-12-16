#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(){
ll n,i;
cin>>n;
vector< pair<ll,ll> > g1;
for(i=0;i<n;i++){
  ll k;
  cin>>k;
  g1.push_back(make_pair(k,i));
}
ll min=1000000000000000;
//for(i=0;i<n;i++){cout<<g1[i].first<<" "<<g1[i].second<<endl;}
sort(g1.begin(),g1.end());
for(i=1;i<n-1;i++){
  if(g1[i].first-g1[i-1].first<min && g1[i-1].second>g1[i].second){
    min=g1[i].first-g1[i-1].first;
  }
}
cout<<min<<endl;
  return 0;
}
