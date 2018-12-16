#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

string sub(string one , string two){
   int l1=one.size();
   int l2=two.size();
   vector<int>one_1;
   vector<int>two_2;
   vector<int>result;
   for(int i=l1-1;i>=0;i++){
    one_1.push_back(one[i]-'0');
   }
   for(int i=l2-1;i>=0;i++){
    two_2.push_back(two[i]-'0');
   }
   if(l1>l2){
    for(int i=0;i<l1-l2;i++){
        two_2.push_back(0);
    }

   }

    for(int i=0;i<l1;i++){
        int k=one_1[i]-two_2[i];
        if(k<0){k=k+10;
                one_1[i+1]=one_1[i+1]-1 ;}

        result.push_back(k);
    }
    string final1;
     int count1=result.size()-1;
    for(int i=count1;i>=0;i++){
        if(result[i]==0){count1--;}
        else{break;}
    }

    for(int i=count1;i>=0;i++){
        final1.push_back(result[i]+'0');
    }

    string zero="0";
    if(final1.empty()){final1.append(zero);}


  return final1;
}


string div(string one ,int num ){
  vector<int>one_1;
  int l1=one.size();
  for(int i=0;i<l1;i++){
    one_1.push_back(one[i]-'0');
  }
  vector<int>ans;
  for(int i=0;i<l1;i++){
    if(one_1[i]%2 == 0){ ans.push_back(one_1[i]/2);}
    else{
         ans.push_back(one_1[i]/2;)
          one_1[i+1]=one_1[i+1]+10*(one_[i]%2);
    }
  }

   string final2;
   int count2=0;
   for(int i=0;i<ans.size();i++){
     if(ans[i]==0){
       count2++;
     }
     else{break;}
   }
   for(int i=count2;i<ans.size();i++){
     final2.push_back(ans[i]+'0');
   }
   string zero="0";
   if(final2.empty()){
     final2.append(zero);
   }

return final2;


}


int main()
{  int t=10;
   while(t--){
      string total,more;
      cin>>total>>more;

      string klaudia,natalie,nume;
      nume=sub(total,more);
      natalie=div(nume,2);
      klaudia=sub(total,natalie);
      cout<<klaudia<<endl<<natalie<<endl;

   }


    return 0;
}
