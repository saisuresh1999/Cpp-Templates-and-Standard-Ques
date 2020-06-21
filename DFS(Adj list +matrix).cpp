#include <bits/stdc++.h>
  using namespace std;
  
  // DFS For Adj Matrix
  void DFS(int u,int visited[],int n,int *arr){
    visited[u]=1;
    
    for(int v=0;v<n;v++){
      if(!visited[v] &&  *((arr+u*n) + v)){
        DFS(v,visited,n,(int *)arr);
      }
    }
  }
  // DFS For Adj List
  void DFS(int u,bool visited[],vector<int> adj[]){
    visited[u]=1;
    for(int v=0;v<adj[u].size();v++){
      if(!visited[adj[u][v]]){
        DFS(adj[u][v],visited,adj);
      }
    }
  
  }