#include<bits/stdc++.h>
 using namespace std;
  int days(long long n,long long a[]){
  	long long i=0,d=0,s=0;
     long long f=1;
     n=n-1;
    while(true){
      d=d+1;
     for(int x=i;x<f;x++){
     	s=s+a[x];}
     	n=n-s;
     if(n<= 0) break;
     else{ i=f;}
     f=f+s;
    }
    return d;
  }

 int main(){
    int t;
    cin>>t;
    while(t--){
    	long long  n,i;
    	cin>>n;
    	long long a[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}

     cout<<days(n,a)<<endl;
    }


 	return 0;
 }
