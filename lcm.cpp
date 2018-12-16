#include <iostream>
using namespace std;
long long gcd( int a,int b){
      if(b==0){
        return a;
      }
    a=a%b;
    return gcd( b,a);
}


int main(){
	long long a,b;
	cin>>a>>b;
 long long m = gcd(a,b);
 long long ans = (a*b)/m;
 cout<<ans<<endl;
	return 0;
}
