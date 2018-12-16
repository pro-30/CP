#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll check=n%26;
      //cout<<check<<endl;
      ll count1=0,count2=0,count3=0;
      if(check<=2 && check>0){ count1= count1+pow(2,(n-1)/26);
                                 count2=0;count3=0;
                                    }
        else if(check>2 && check<=10){count2=count2+pow(2,(n-1)/26);
                                       count1=0;count3=0;
                                     }


        else{count3= count3+pow(2,(n-1)/26);
                count1=0;count2=0;
                }
        //if(n%26==0 && n!=0 ){count3=count3+pow(2,(n-1/26));}


      cout<<count1<<" "<<count2<<" "<<count3<<endl;


   }


	return 0;

}
