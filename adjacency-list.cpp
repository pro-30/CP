#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int nodes=0,edges,x,y,cost;
    cin>>edges;
    vector<pair<int,int> > adj[edges];
    for(int i=0;i<edges;i++){
      cin>>x>>y>>cost;
      adj[x].push_back(make_pair(y,cost));
      adj[y].push_back(make_pair(x,cost));
    }
    nodes=5;

    for(int i=0;i<nodes;i++){
        cout<<"Adjacency list of node "<<i<<" : "<<endl;
        for(int j=0;j<adj[i].size();j++){
              if(j==adj[i].size()-1){
                cout<<adj[i][j].first<<"cost is: "<<adj[i][j].second<<endl;
              }
               else{cout<<adj[i][j].first<<"cost is :"<<adj[i][j].second<<"--> ";}

        }
        cout<<endl;
    }





  return 0;
}
