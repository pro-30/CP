#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std;
// if the number is given as a binary array

/*int getMaxLength(bool arr[], int n) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (arr[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            count++;//increase count 
            result = max(result, count); 
        } 
    } 
  
    return result; 
} */
int getMaxLength(bool arr[], ll n,ll k,ll start_index)
{   ll j=start_index;
    bool b[n];
    for(ll i=0;i<n;i++){
       b[j]=a[i];
       j=(j+1)%n ;

    }
     int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (ll i = 0; i < n; i++) 
    { 
        // Reset count when 0 is found 
        if (b[i] == 0) 
            count = 0; 
  
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        else
        { 
            count++;//increase count 
            result = max(result, count); 
        }
        if(result>=k)break; 
    } 
  
    return result; 
}


int main(){
      ll i,n,q,k,start_index=0,rotation=0;
      cin>>n>>q>>k;
      bool a[n];

      for(i=0;i<n;i++)cin>>a[i];

       while(q--){
       	char x;
       	cin>>x;
       	if(x=='!'){ rotation++;
              start_index= rotation%n ; }
       	if(x=='?'){ ll ans=getMaxLength(a,n,k,start_index);
       	             if(ans>k)ans=ans-1;
       	 	      cout<<ans<<endl;
       	           }

       }
	return 0;

}
