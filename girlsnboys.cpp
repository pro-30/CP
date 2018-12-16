#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int g,b;
  cin>>g;
  cin>>b;
  while (g != -1 || b != -1) {
    if(g>b){
       if(b==0){
          cout<<g<<endl;}
       else{ int g1=g/(b+1);
             int g2=g-g1;
             cout<<max(g1,g2)<<endl;
               }
    }
    if(b>g){
          if(g==0){cout<<b<<endl;}
          else{
            int b1=b/(g+1 );
            int b2=b-b1;
            cout<<max(b1,b2)<<endl;
          }
        }
      if(b==g){
          cout<<"1"<<endl;
      }
      cin>>g;
      cin>>b;
  }

  return 0;
}
