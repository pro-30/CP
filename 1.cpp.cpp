#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  int l=s.size();
  vector<pair<char,int> > g1;
  for(int i=0;i<l;i++){
    if(s[i]=='('||s[i]== ')' || s[i]=='[' || s[i]==']' || s[i]=='{' ||s[i]=='}'){
      g1.push_back(make_pair(s[i],i+1));
}
  }
  int l2=g1.size();
 /* for(int i=0;i<l2;i++){
  	cout<<g1[i].first<<" "<<g1[i].second<<endl;
  }*/
  int flag=0;
  stack<pair<char,int > >s1;
  s1.push(make_pair(g1[0].first,g1[0].second));
  for(int i=1;i<l2;i++){
        if(g1[0].first==')' || g1[0].first=='}' || g1[0].first==']'){flag=1; cout<<g1[0].second<<endl;break;}
    if(g1[i].first=='(' || g1[i].first=='{'|| g1[i].first=='['){
        s1.push(make_pair(g1[i].first,g1[i].second));}
        if(g1[i].first==')'){ if(!s1.empty() && s1.top().first=='('){s1.pop();}
                              else if(s1.empty()){flag=1;
                               cout<<g1[i].second<<endl;}
                              else{ flag=1;
                                    cout<<g1[i].second<<endl;
                                    break;}
                          }
          if(g1[i].first=='}'){ if( !s1.empty() && s1.top().first=='{'){s1.pop();}
                                else if(s1.empty()){flag=1;
                               cout<<g1[i].second<<endl;}
                              else{ flag=1;
                                    cout<<g1[i].second<<endl;
                                    break;}
          }


     if(g1[i].first==']'){ if( !s1.empty() && s1.top().first=='['){s1.pop();}
                            else if(s1.empty()){flag=1;
                               cout<<g1[i].second<<endl;}
                              else{ flag=1;
                                    cout<<g1[i].second<<endl;
                                    break;}

  }
          }
          if(flag==0){ if(!s1.empty()){cout<<s1.top().second<<endl;}
                           else{cout<<"Success"<<endl;}

}
  return 0;

}
