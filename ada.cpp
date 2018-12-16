#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,q,k;
  cin>>q;
  cin>>k;
  vector< pair<string,int > > g1;
  for(i=0;i<q;i++){
    string s;
    int x;
    cin>>s;
    cin>>x;
    g1.push_back(make_pair(s,x));
  }
 sort(g1.begin(),g1.end());
 stack<pair<string,int> > s1;
 s1.push(make_pair(g1[0].first,g1[0].second));
 for(i=1;i<q;i++){
   if(g1[i].first==s1.top().first){s1.top().second=s1.top().second+g1[i].second;}
   else{ s1.push(make_pair(g1[i].first,g1[i].second));}
 }
 vector<int>ans;
 for(i=0; ;i++){
   if(s1.empty()){break;}
   else{
     ans.push_back(s1.top().second);
     s1.pop();
   }
 }
 sort(ans.begin(),ans.end(),greater<>());
int sum=0;
for(i=0;i<k && i< ans.size();i++){
  sum=sum+ans[i];
}
cout<<sum<<endl;

  return 0;
}
