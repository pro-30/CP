#include <iostream>

using namespace std;
int k;
long long  fib1( long long  n){
 int a=0;
 int b=1;
 int ans1;
 for(long long  i=2;i<=n;i++){
    ans1=(a%10+b%10)%10 ;
    a=b;
    b=ans1;
    if(i==n-1){k=ans1;}}
    return ans1;
}
long long fib(long  n ,long long  m){
	m=(m+2)%60 ;
	int fib[m+1];
	fib[n]=fib1(n);
	fib[n-1]=k;
	for(int i=n+1;i<=m;i++){
		fib[i]=(fib[i-1] %10 + fib[i-2]%10)%10 ;

	}

	if(fib[m]==0){ return 9;}

return (fib[m]%10 - 1);
}
int main() {
	long long n=0,m=0;
	cin>>n>>m;
	ll ans=fib(n,m);
	cout<<ans<<endl;

	return 0;
}
