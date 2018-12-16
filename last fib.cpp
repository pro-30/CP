#include <iostream>
#define ll long long
using namespace std;

ll fib( ll n){
 int a=0;
 int b=1;
 int ans;
 for(ll i=2;i<=n;i++){
    ans=(a%10+b%10)%10 ;
    a=b;
    b=ans;
    }
    return ans;
}


int main() {
	ll n,ans;
	cin>>n;
	ans=fib(n);
	cout<<ans<<'\n';
	return 0;
}
