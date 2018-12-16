#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int i,n,x,y;
          cin>>n>>x>>y;
          int a[n];
          for(i=0;i<n;i++)cin>a[i];

          int flag=0;
          int count1=0;
           for(i=0;i<n;i++){
                if(a[i]-x*y>=flag){count1=(a[i]-x*y-flag;)}
                flag=a[i]+x*y;
                         }

    count1=count1+100-flag;
    cout<<count1<<endl;
     }



	return 0;
}