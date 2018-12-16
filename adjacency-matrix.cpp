#include<bits/stdc++.h>

using namespace  std;
 bool adj[10][10];

 void initialize(){
   for(int i=0;i<10;i++){
     for(int j=0;j<10;j++){
       adj[i][j]=false;
     }
   }
 }

 int main(){
   initialize();
       int nodes,edges;
      cin>>nodes>>edges;
      int x,y;

     for(int i=0;i<edges;i++){
      cin>>x>>y;
      adj[x][y]=true;
     }


     int start,end;
     cin>>start>>end;
     if(adj[start][end]==true){cout<<"There is and edge between "<<start<<" and "<<end<<endl;}
      else{cout<<"no egde between them"<<endl;}
 return 0;
}
