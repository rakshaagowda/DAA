#include <stdio.h>
#include <stdlib.h>
int n,count,key;
int binary(int *arr,int key,int low, int high){
  int mid=(high+low)/2;
  count++;
    if(*(arr+mid)==key){
        return mid+1;
    }
    else if(key>*(arr+mid)){
      return binary(arr,key,mid+1,high);
    }
    else if(key<*(arr+mid)){
      return binary(arr,key,low,mid-1);

    } 
    else 
      return -1; 
}

void tester(){
  int low=0,high;
  printf("enter number of elements");
  scanf("%d",&n);
  high=n-1;
  int *arr=(int*)malloc(n*sizeof(int));
  printf("ENter elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",(arr+i));

  }
  printf("ENter key to be searched: ");
  scanf("%d",&key);
  int ans=binary(arr,key,low,high);
  if(ans==-1)
    printf("key not found");
  else{
    printf("key found at position %d",ans);
  }
}

int main(){
  tester();
  return 0;
}