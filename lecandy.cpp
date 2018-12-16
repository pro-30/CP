#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       ll i,n,c;
       cin>>n>>c;
       ll a[n],sum=0;
       for(i=0;i<n;i++){
       	cin>>a[i];
       	sum=sum+a[i];}
       	if(sum<=c){cout<<"YES"<<endl;}
       	else{cout<<"NO"<<endl;}


    


    }



	return 0;
}