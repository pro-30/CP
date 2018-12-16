#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,j;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
     cin>>a[i];
   }
   int lo=-1,hi=0;
   int vis[n]={};
   for(i=0;i<n;i++){
     if(vis[i]){continue;}
     int index=-1;
     int count=0
     for(j=i;j<i+k,j<n;){
        if(a[i]==1){index=i; count++;
        j=j+index;}
      }
      else{j++;}
     for(int k=i;k<=index;k++){
       vis[k]==1;
     }
   }



   }



  return 0;}
