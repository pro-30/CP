#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
       int m,i;
       cin>>m;
       int n;
       cin>>n;
       vector< pair<int,int> > g1;
       for(i=0;i<n;i++){
         int x;
         cin>>x;
         g1.push_back(make_pair(x,i+1));
       }
       sort(g1.begin(),g1.end());
        /*for(i=0;i<n;i++){
            cout<<g1[i].first<<" "<<g1[i].second<<endl;
        }*/

       int a1=0,b1=0;
       for(i=0;i<n;i++){
            int foo=m-g1[i].first;
            int lo=0,hi=n-1;
            while(lo<=hi){
              int mid=(lo+hi)/2;
              if(g1[mid].first==foo){
                  if(mid!=i&&i<mid){
                cout<<g1[i].second<<" "<<g1[mid].second<<"\n";}
                break;
              }
              if(g1[mid].first<foo)lo=mid+1;
              if(g1[mid].first>foo)hi=mid-1;

            }
            //cout<<k<<endl;
       }


  }


  return 0;
}
2
