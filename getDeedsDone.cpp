#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair

//using namespace boost::multiprecision;
using namespace std;


ll i,n,m,t,timeTaken,count1,tasks=0,sum,current_index=0;

ll optimalTime(ll  a[],ll hi,ll lo){
             hi=*max_element(a,a+n);
             lo=*min_element(a,a+n);

             while(lo<=hi){
             	 timeTaken=0;
                 count1=m;
                 sum=0;
                 ll mid=lo + (hi-lo)/2 ;
                 for( i=0;i<n;i++){
                 	if(a[i]<=mid){sum+=a[i];count1--;tasks++;current_index=i;}
                 	if(count1==0){
                 		if(i==n-1)timeTaken-=2*sum;
                 	    timeTaken+=2*sum;
                 	    if(i!=n-1)
                 	    	sum=0;
                 	    count1=m;
                 	           }
                }
                timeTaken+=sum;
               if(timeTaken<=t)lo=mid;
               if(timeTaken>t)hi=mid-1;

             }
             //now only thing left to do is decreases for the last few m
   return lo;
}

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){

    cin>>n>>m>>t;
    ll diff[n];
    for(i=0;i<n;i++)cin>>diff[i];

      ll ans=optimalTime(diff,n-1,0);

    cout<<ans<<" "<<tasks<<endl;


    }



	return 0;
}
