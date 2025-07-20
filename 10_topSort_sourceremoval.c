#include <stdio.h>
#include <stdlib.h>
int q[20],f,r,indeg[20],n;
int bfs(int adjmat[n][n]){
  int count=0;
  f=r=-1;
  for(int i=0;i<n;i++){
    if(indeg[i]==0){
      q[++r]=i;
    }
  }
    while(f!=r){
      count++;
      int cur=q[++f];
      for(int i=0;i<n;i++){
        if((adjmat[cur][i])==0)
          indeg[i]--;
          if(!indeg[i]){
            q[++r]=i;
          }
        }
      }
      return count!=n;
    }

    void tester(){
      printf("Enter n: ");
      scanf("%d",&n);
      int adj[n][n];
      printf("Enter adjacency matrix: ");
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&adj[i][j]);
          if(adj[i][j]){
            indeg[j]++;
          }
        }
      }

     if(bfs(adj)){
      printf("cycle exists");

     }
     else{
      printf("cycle doesnt exist" );
      for(int i=0;i<r;i++){
        printf("%d ",q[i]);
      }

     }

    }

    
    void main(){
      tester();
    }


