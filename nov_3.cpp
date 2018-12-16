#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n,i;
       cin>>n;
       ll a[n];
       for(i=1;i<=n;i++)cin>>a[i];

        vector<pair<ll,ll> > g1;
           g1.pb(mp(0,0));
       for(i=1;i<=n;i++){
        g1.pb(mp(a[a[i]],a[i]));
       }
       /*for(i=1;i<=n;i++){
        cout<<g1[i].first<<" "<<g1[i].second<<endl;
       }*/
       int flag=0;
       
       sort(g1.begin(),g1.end());

       for(i=1;i<n;i++){
        if(g1[i].first==g1[i+1].first && g1[i].second != g1[i+1].second){ flag=1; break;}
       }
     if(flag==1){cout<<"Truly Happy"<<endl;}
     else{cout<<"Poor Chef"<<endl;}


    }


  return 0;
}
