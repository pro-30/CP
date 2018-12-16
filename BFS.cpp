#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int>v[10]; //vector maintaining adjacency list representation
int level[10];  //to determine the level of each node
bool vis[10];  // mark the node if visited
void initialize(){
  for(int i=0;i<10;i++){
    vis[i]=false;
  }
}
void BFS(int s){
  queue<int>q;
  q.push(s);
  level[s]=0; //setting the level of source node as 0
  vis[s]=true;
  cout<<s<<" level "<<level[s]<<endl;
  while(!q.empty()){
    int p=q.front();
    q.pop();
    for(int i=0;i<v[p].size();i++){
      if(vis[v[p][i]]==false){
        level[v[p][i]]=level[p] + 1 ;
        q.push(v[p][i]);
        cout<<v[p][i]<<" level "<<level[v[p][i]]<<endl;
        vis[v[p][i]]=true;
      }
    }
  }

}
int main(){
  int edges_count;
  cin>>edges_count;
  initialize();
  while(edges_count--){int m,n;
                      cin>>m>>n;
                      v[m].push_back(n);  }

                      BFS(1);
                      return 0;
}
