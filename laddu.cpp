// By Aman Jain(jainaman224)
// 6/5/16

#include <iostream>

using namespace std;

int main(){
	string x;
	int v,t,ans,l,m;
	cin >> t;
	while(t--){
		ans = v = 0;
		cin >> m;
		cin >> x;
		if(x=="INDIAN")
			v=1;
		while(m--){
			cin >> x;
			if(x=="CONTEST_WON"){
				ans+=300;
				cin >> l;
				if(l<20)
					ans+=20-l;
			}
			else if(x=="TOP_CONTRIBUTOR")
				ans+=300;
			else if(x=="BUG_FOUND"){
				cin >> l;
				ans += l;
			}
			else if(x=="CONTEST_HOSTED")
				ans+=50;
			// cout << ans << " " << x << endl;
		}
		if(v)
			cout << ans/200 << endl;
		else
			cout << ans/400 << endl;
	}
	return 0;
}
