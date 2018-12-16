#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>adj[10];
bool visited[10];
//iterative
/*
void dfs(int s){
  stack<int>S;
  S.push(s);
  visited[s]=true;
  while(!S.empty()){
    int v=S.top();
    S.pop();
    for(int i=0;i<adj[v].size();i++){
      if(visited[adj[v][i]]==false){S.push(adj[v][i]);
                  visited[adj[v][i]]=true;
                   }
                 }
        }
}*/
//recursive
void dfs(int s){
  visited[s]=true;
  for(int i=0;i<adj[s].size();i++){
    if(visited[adj[s][i]]==false){dfs(adj[s][i]);}
  }
}

void initialize(){for(int i=0;i<10;i++){
             visited[i]=false;}
           }


int main(){
  int nodes,edges,x,y,connectedComponents=0;
  cin>>nodes>>edges;
  for(int i=0;i<edges;i++){cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
}
initialize();
  for(int i=1;i<=nodes;i++){
    if(visited[i]==false){dfs(i);connectedComponents++;}
  }
  cout<<"No. of connected Components are: "<<connectedComponents<<endl;




  return 0;
}
