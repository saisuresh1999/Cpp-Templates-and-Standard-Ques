#include <bits/stdc++.h>
using namespace std;
//HEAP OPERATIONS
//heapify, delete root, insert
  void heapify(int arr[],int n,int i){
    int small=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]<arr[small])
      small=l;
    if(r<n && arr[r]<arr[small])
      small=r;
    if(small!=i){
      swap(arr[small],arr[i]);
      heapify(arr,n,small);
    }
    
  }
  void deleteRoot(int arr[],int &n){
    int le=arr[n-1];
    arr[0]=le;
    n=n-1;
    heapify(arr,n,0);
  }
  void insert(int arr[],int num,int loc){
    int par;
    while(loc>0){
      par=(loc-1)/2;
      if(arr[par]<=num){
        arr[loc]=num;
        return;
      }
      arr[loc]=arr[par];
      loc=par;
    }
    arr[0]=num;
  }
  
  int main(){
      
    return 0;
  }
  

    
  