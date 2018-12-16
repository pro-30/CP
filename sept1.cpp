#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n_box,swaps,x;
    cin>>n_box;
    cin>>x;
    cin>>swaps;
    int a[2*swaps];
    for(int i=0;i<2*swaps;i++){cin>>a[i];}
    vector< pair<int,int> >g1;
    for(int i=0;i<2*swaps;i+=2){
      g1.push_back(make_pair(a[i],a[i+1]));
    }

int ans=x;
int l=g1.size();
for(int i=0;i<l;i++){
  if(g1[i].first==ans){ans=g1[i].second;}
   else if(g1[i].second==ans){ans=g1[i].first;}
}
cout<<ans<<endl;



  }
  return 0;

}
