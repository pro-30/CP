
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int p1,p2,k;
        cin>>p1;
        cin>>p2;
        cin>>k;
        long long points= p1+p2 ;
        long long rem=points%k ;
        long long check=points/k;
        if(check %2 ==0){ cout<<"CHEF"<<endl;}
        else{cout<<"COOK"<<endl;}




	}

	return 0;
}
