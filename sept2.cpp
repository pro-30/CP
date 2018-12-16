#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){

    int knowledge_req,power_req,knowledge_mult,power_mult;
    cin>>knowledge_req;
    cin>>power_req;
    cin>>knowledge_mult;
    cin>>power_mult;
    int current_power=1;
    int current_knowledge=1;
     int flag=0;
     int flag1=0;
     int flag2=0;

             if(current_power+1==power_req && current_knowledge+1==knowledge_req){flag=1;cout<<"Chefirnemo"<<endl;}
              else{
    while(current_knowledge<knowledge_req){
      current_knowledge=current_knowledge +knowledge_mult;
      if(current_knowledge==knowledge_req){ flag1=1;break;}
       }
       if(current_knowledge==knowledge_req){ flag1=1;}
   while(current_power<power_req){
         current_power=current_power +power_mult;
         if(current_power==power_req){ flag2=1;break;}
          }
          if(current_power==power_req){ flag2=1;}

             if(flag1==1 && flag2==1){cout<<"Chefirnemo"<<endl;}
            else if(  current_power>power_req && current_knowledge>knowledge_req &&  current_power-power_mult +1 ==power_req && current_knowledge-knowledge_mult+1 == knowledge_req){cout<<"Chefirnemo"<<endl;}
            else{cout<<"Pofik"<<endl;}
  }

  }
  return 0;
}
