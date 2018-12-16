#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

/*ll binary_search1(vector<pair<ll,ll> > g1 ,ll hi,ll lo,ll x){
   // for(int i=0;i<g1.size();i++){cout<<g1[i].first<<" "<<g1[i].second<<endl;}
     //    cout<<hi<<" "<<lo<<endl;
     if(x==120){cout<<"FLAG"<<endl;}
                while(lo<=hi){
                ll mid= lo + (hi-lo) / 2 ;
                 // cout<<mid<<endl;
                if(g1[mid].first>=x && g1[mid-1].first<x){return mid;}
                if(g1[mid].first<x){lo= mid + 1 ;}
                else{ hi= mid - 1;}
               }


return 0;

}
*/
struct compare {
    bool operator()(const pair<int, int>& value,
                                const int& key)
    {
        return (value.first < key);
    }
    bool operator()(const int& key,
                    const pair<int, int>& value)
    {
        return (key < value.first);
    }
};


int main(){
    ll n,m,i;
    cin>>n;
     ll score[n];

     for(i=0;i<n;i++){
        cin>>score[i];
     }


    /* for(i=0;i<m;i++){
        cin>>alice[i];
     }*/

     vector<pair<ll,ll> > g1;
     ll rank=1;
     ll current =score[0];
     g1.pb(mp(score[0],1));
     for(i=1;i<n;i++){
        if(score[i]==current){ g1.pb(mp(score[i],rank));}
        else if(score[i]<current){ current=score[i];  rank++;
                                g1.pb(mp(score[i],rank));
                                   }
     }
     sort(g1.begin(),g1.end());
     //for(i=0;i<n;i++)cout<<g1[i].first<<" "<<g1[i].second<<endl;
      cin>>m;
    //ll last=0;
      for(i=0;i<m;i++){
            ll alice;
            cin>>alice;

  vector<pair<ll,ll> >::iterator low,up;
            up=g1.begin();
            low= lower_bound(g1.begin()+ up,g1.end(),alice,compare());

            if(low->first==alice){ cout<<low->second<<endl;}
            else if(low->first>alice){ cout<<low->second +1 <<endl;}
            up=low;

      }


    return 0;
}
