#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int digsum(int n)
{
    int sum;

    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10);

    return sum;
}
int main(){
   int t;
   cin>>t;
   while(t--){
        int i,n,d;
        cin>>n;
        cin>>d;
        vector<pair<int ,int> > g1;

        for(i=0;i<8;i++){
            int x=n+ i*d ;
        	int y=x%9;
        	g1.pb(mp(y,x));
        	 }
     for(i=0;i<8;i++){ cout<<g1[i].second<<" "<<g1[i].first<<endl;}
      sort(g1.begin(),g1.end());
     //int index_min=min(g1.begin(),g1.end());
     int add_last = g1[index_min].second ;
     int step_add=add_last-n;
     step_add=step_add%d;
     while(add_last!=g1[index_min].first){
     	 add_last=digsum(add_last);
     	 step_add++;
     	}
     	cout<<step_add<<endl;



   }



	return 0;
}
