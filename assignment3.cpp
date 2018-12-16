#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
  int s,i;
  cin>>s;
  int n;
  cin>>n;
  stack<pair<int ,int> > on_buffer;
  stack<pair<int,int> > processed;
  if(n==0){ return 0 ;}
  else{
  for(i=0;i<n;i++){
  	int a,p;
  	cin>>a;
  	cin>>p;
     if(i==0){on_buffer.push(mp(a,p));cout<<a<<endl;}
     else{
        if(a >  on_buffer.top().second && on_buffer.size()<s){
           cout<<a<<endl; 
            processed.push(mp(on_buffer.top().first,on_buffer.top().second));
            on_buffer.pop();
        }
        else{ cout<<"-1"<<endl;}

     }
  }
}

	return 0;
}
