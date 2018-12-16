#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
 using namespace std;
int main(){
   string s;
   cin>>s;
   ll length=s.size();
   ll n,i;
   cin>>n;
   map<char,int>m1;
   for(i=0;i<s.size();i++){
    m1[s[i]]++;
   }
   ll x_times = n/s.size();


   cout<<s.size()<<endl;
   if(x_times==0){ll ans=0;for(i=0;i<n;i++){
        if(s[i]=='a'){ans++;}
   }
  // cout<<ans<<endl;
   }
   else{
   ll count_a= x_times*m1['a'];
     for(i=x_times*s.size();i<n;i++){
      if(s[i]=='a'){count_a++;}

     }
     cout<<count_a<<endl;
   }

  return 0;
}
