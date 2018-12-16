#include<bits/stdc++.h>

using namespace std;
int main(){
  int n;
  while(cin>>n && n!=0){
   stack<int>side_street;
   queue<int>source;
   for(int i=0;i<n;i++){
     int k;
     cin>>k;
     source.push(k);
   }
   int need=1;
   while(!side_street.empty()||!source.empty()){
      if(!source.empty() && source.front()==need){
        need++;
        source.pop();
      }

     else{ if(!side_street.empty()&&side_street.top()==need){need++;side_street.pop();}

          else{ if(!source.empty()){
                  side_street.push(source.front());
                    source.pop();}
                    else{break;}
                }
      }
                     }
  if(need==n+1){cout<<"yes"<<endl;}
  else{cout<<"no"<<endl;}


  }
 return 0;
}
