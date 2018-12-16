#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long
/*int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
       if (arr[mid] == x)   
            return mid; 
  
          if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
      return binarySearch(arr, mid+1, r, x); 
   } 
  
     return -1; 
} */
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
         int i,n,k,j;
         string s[n];
         for(i=0;i<n;i++)cin>>s[i];
         	set<string>my_set;
           vector<string>str;
           for(i=0;i<k;i++){
           	int size;
           	cin>>size;
           	for(j=0;j<size;j++){string s2;cin>>s2;str.pb(s2);}
           
           }
           sort(str.begin(),str.end());
           
          for(i=0;i<n;i++){
          	if(binary_search(str.begin(),str.end(),s[i])){cout<<"YES"<<" ";}
             else{cout<<"NO"<<" ";}
          }



       cout<<endl;
     }

  return 0;
}2
3 2
piygu ezyfo rzotm
1 piygu
6 tefwz tefwz piygu ezyfo tefwz piygu
4 1
kssdy tjzhy ljzym kegqz
4 kegqz kegqz kegqz vxvyj