#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long b,c,m,n;
		scanf("%li%li",&b,&c);
	    m=b;
	    n=c;
	    while(n){
	        m=m%n;
	        m^=n^=m^=n;
	    }
		printf("%li %li\n",m,(b*c)/m);
	}
}
