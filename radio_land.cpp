#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 100000 
using namespace std;

int main(){
 ll n,k,i;
 cin>>n>>k;
 ll a[n];
 for(i=0;i<n;i++)cin>>a[i];
 	stable_sort(a,a+n);
  ll count1=1;
  ll covered=-1;
  for(i=k;i<n;i++){
       covered++;
       if(covered==k+1){count1++; covered=0;}

  }
  cout<<count1<<endl;




	return 0;
}