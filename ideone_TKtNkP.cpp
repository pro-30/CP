#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int v_binarysearch(int a[],int l,int h,int x){

while(l<=h){
 int mid=l+(h-l)/2;
 if(a[mid]<=x && a[mid+1]>x){
    return mid;
 }
 if(a[mid]<x){
    l=mid+1;
 }
     else{
        h=mid-1;
     }
}
return -1;
 }

 int w_binarysearch(int a[],int l,int h,int x){
   while(l<=h){
    int mid=l+(h-l)/2 ;
    if(a[mid]>=x && a[mid-1]<x){
        return mid;}
    if(a[mid]<x){
        l=mid+1;
    }
    else {
        h=mid-1;}

   }

 return -1;
 }



int main()
{ int n,x,y,j,i,ans=INT_MAX;
int flag1=1,flag2=1;
cin>>n>>x>>y;
int en[n],ex[n];

for(i=0;i<n;i++){
    cin>>en[i]>>ex[i];

    }

/*for(i=0;i<n;i++){
    cout<<en[i]<<'\t';

}
cout<<'\n';
for(i=0;i<n;i++){int l=0;h=x-1;
    cout<<ex[i]<<'\t';
}*/
int v[x],w[y];
for(i=0;i<x;i++){
    cin>>v[i];int l=0;
}
for(i=0;i<y;i++){
    cin>>w[i];
}
sort(v,v+x);
sort(w,w+y);
for(int i=0;i<n;i++){
    int result1=v_binarysearch(v,0,x-1,en[i]);
     if(result1==-1){
         if(v[x-1]<=en[i]){result1=x-1;}
         else{ result1=0;
                flag2=0;
                  }
     }
     int result2 =w_binarysearch(w,0,y-1,ex[i]);
     if(result2==-1){
        if(w[0]>=ex[i]){
            result2=0;
        }
        else{
            result2 = y-1;
            flag1=0;
        }
     }


     if(flag1 >0 && flag2>0){

        ans=min(ans,abs(w[result2]-v[result1]+1));
        }

     flag1=1;
     flag2=1;

}
cout<<ans;
    return 0;
}
