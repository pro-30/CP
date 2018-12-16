#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;
 bool checkLeadingZeros(ll next_num , ll temp_dig){
       ll count=0;
       while(next_num){
       	count++;
       	next_num=next_num/10;
             }
           return count==temp_dig;  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll dig,length=s.size();
        ll firstNum=0;
        bool flag=false;
      for(dig=1;dig<=length/2;dig++){
         ll max=0;
         for(i=1;i<=digits;i++)max=max*10+9;
         ll temp_dig=dig;
         firstNum=0;
         for(i=0;i<dig;i++)
         	firstNum=firstNum*10+(s[i]-'0');
         if(!checkLeadingZeros(firstNum,dig)){
         	flag=false;
         	break;
         }
         ll j=dig;
         ll currentNum=firstNum;
         while(true){

         	if(j==length){
         		flag=true;
         		break;
         	}
         	if(currentNum==max)temp_dig++;
         	ll next_num=0;
         	if(j+temp_dig>len)break;
         	for(int i=j;i<j+temp_dig;i++)
         		next_num=next_num*10+(s[i]-'0');
         	if(next_num-currentNum!=1)break;
         	else{ currentNum=next_num;
         		j=j+temp_dig;}
         	}
         	if(flag==true)cout<<"YES"<<firstNum<<endl;
         	else cout<<"NO"<<endl;




      }        




    }

	return 0;
}