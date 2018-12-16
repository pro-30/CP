#include<bits/stdc++.h>
#include<algorithm>
#define pb push_back
#define mk  make_pair
#define ll long long
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            ll n,i;
            cin>>n;
            vector<ll> g1;
            for(i=0;i<n;i++){
                ll x;
                cin>>x;
                g1.push_back(x);
            }


         ll count=0;
         ll size=g1.size();
         while(size>0){
                //ll length=g1.size();
               ll index=distance(g1.begin(), max_element(g1.begin(), g1.end()));
               //cout<<index<<" "<<g1[index]<<endl;

               while(true){g1.pop_back(); if(g1.size()==index)break;
               }
               size=index;
               //cout<<size<<endl;
                count++;

         }
         if(count%2 !=0){ cout<<"BOB"<<endl;}
         else{cout<<"ANDY"<<endl;}
        }



    return 0;
}
