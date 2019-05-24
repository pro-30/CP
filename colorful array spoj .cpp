/*** 
  Template  © prashant kumar 
***/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include<climits>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
const double pi=acos(-1.0);
#define boost  ios_base::sync_with_stdio(false);
#define endl '\n'
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define pii pair<ll, ll>
#define f(i,a,b) for(ll i = (ll)(a); i < (ll)(b); i++)
#define rf(i,a,b) for(ll i = (ll)(a); i > (ll)(b); i--)
#define ms(a,b) memset((a),(b),sizeof(a))
#define max(a,b) ((a>b)?(a):(b))
#define min(a,b) ((a<b)?(a):(b))

#define abs(x) ((x<0)?(-(x)):(x))
#define MAX 200005
#define inf LLONG_MAX
#define MIN INT_MIN
//typedef
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
ll powmod(ll a,ll b) {ll res=1;if(a>=mod)a%=mod;for(;b;b>>=1){if(b&1)res=res*a;if(res>=mod)res%=mod;a=a*a;if(a>=mod)a%=mod;}return res;}

/*..................................................................................................................................*/
int parent[MAX];
int size[MAX];
struct Array {
	int lo;
	int hi;
	int co;
};
void make_set(int v){
	parent[v]=v;
	size[v]=1;
}
int find_set(int v){
	if(parent[v]==v){return v;}
	return parent[v]=find_set(parent[v]);
}




int main(){
	boost;
	int n,q;
	cin>>n>>q;
    Array query[q];

	f(i,0,n+2){make_set(i);}
	f(i,0,q){
		cin>>query[i].lo>>query[i].hi>>query[i].co;
	}
	ll answer[n+1]={0};
	for(int i=q-1;i>=0;i--){
		int l=query[i].lo;
		int r=query[i].hi;
		int c=query[i].co; 
		for(int v=find_set(l);v<=r;v=find_set(v)){
			answer[v]=c;
			parent[v]=v+1;

		}
	}
	f(i,1,n+1)cout<<answer[i]<<endl;
	

	
	return 0;
}