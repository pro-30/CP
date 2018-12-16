#include <iostream>
using namespace std;
long long m;
long long pisano(long long r){
   int r1=0,r2=1,temp=r1+r2;
   for(int i=0;i<r*r;i++){
    temp=( r1 + r2 )%r ;
    r1=r2;
    r2=temp;
     if(r1==0 && r2==1){return i+1;}
     }
}
  long long fib(long long  k ){
      long long a[k];
      a[0]=0;
      a[1]=1;

      for( long long  i=2;i<=k;i++){
        a[i]=(a[i-1]+a[i-2])%m;
      }

         return a[k];

  }

int main(){
	long long  n,i;
	cin>>n>>m;
    long long k= n%pisano(m);

     long long ans = fib(k);
	 cout<<ans%m<<'\n';

	 return 0;
}
