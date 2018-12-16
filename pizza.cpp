#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  float count_1=0,count_2=0,count_3=0;
  while(n--){string s;
  cin>>s;
if(s=="1/2"){count_1++;}
else if(s=="3/4"){count_2++;}
else{count_3++;}
}
//cout<<count_1<<" "<<count_2<<" "<<count_3<<endl;
int ans=0;
if((int)count_1 % 2==0){ans=ans+(count_1)/ 2 ;
	if(count_3 >= count_2){  ans=ans+ ceil((count_3 - count_2 )/4) ;}
}
else if((int)count_1 % 2 !=0 ){ans=ans+ (count_1) /2 +1;
	if(count_3 >= count_2 + (count_1)/2 +1  ){ ans=ans+(count_3-ceil((count_2 + (count_1)/2 +1 ))/4);}}

 ans=ans+count_2 ;

 cout<<ans+1<<endl;


  return 0;
}
