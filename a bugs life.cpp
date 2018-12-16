#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector< vector<int> > v;
int level[3000]={0};
bool visited[3000];
int g1[1000005][2];
void bfs(int s){
  queue<int>q;
  q.push(s);
  level[s]=0;
  visited[s]=true;
   while(!q.empty()){
       int p=q.front();
       q.pop();
       for(int i=0;i<v[p].size();i++){
           if(visited[v[p][i]]==false){
             level[v[p][i]]=level[p]+1;
             q.push(v[p][i]);
             visited[v[p][i]]=true;
            }
           }
        }
    }
    void init(int n){
      for(int i=0;i<n+5;i++){
        visited[i]=false;
      }
    }

int main(){
 int t;
 cin>>t;
 int k=0;
 while(t--){
int nodes,edges,x,y;
cin>>nodes>>edges;
v.resize(nodes+5);
v.clear();
int i;
for(i=0;i<edges;i++){
   cin>>x>>y;
   v[x].push_back(y);
   v[y].push_back(x);
   g1[i][0]=x;
   g1[i][1]=y;
}
init(nodes);
for(i=1;i<=nodes;i++){
  if(visited[i]==false){bfs(i); }
}
int flag=0;
for(i=0;i<edges;i++){
  if((level[g1[i][0]]-level[g1[i][1]])%2==0){
    flag=1; break;
  }
} k++;
if(flag==1){cout<<"Scenario #"<<k<<":\nSuspicious bugs found!\n";}
else{cout<<"Scenario #"<<k<<":\nNo Suspicious bugs found!\n";}




 }

return 0;
}
