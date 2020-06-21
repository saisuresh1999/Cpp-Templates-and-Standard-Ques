#include <bits/stdc++.h>
using namespace std;
//HEAP SORT


void heapSort(int arr[],int n){
    for (int i=n-1; i>0; i--) { 
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
 }
  
int main(){
      
    return 0;
 }
  

    
  