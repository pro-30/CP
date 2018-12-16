#include<bits/stdc++.h>
using namespace std;
bool sortbysec_descending(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
	 if(a.second==b.second){return (b.first>a.first);}
	 else{
       return (a.second>b.second);} 
} 
  

bool sortbysec_ascending(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
	if(a.second==b.second){return (a.first>b.first);}
	else{
    return (a.second < b.second); }
     } 
  
int main(){

int n,m,i;
cin>>n;
cin>>m;
int a[n];
int b[m];
  for(i=0;<n;i++){
  	cin>>a[i];
  }
  for(i=0;i<n;i++){
  	cin>>b[i];
  }

vector<pair<int ,int> >g1;
for(i=0;i<n;i++){
	g1.push_back(make_pair(a[i],b[i]));
}
sort(g1.begin(),g1.end(),sortbysec );



	return 0;
}