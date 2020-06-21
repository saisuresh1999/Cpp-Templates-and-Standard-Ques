#include <bits/stdc++.h>
using namespace std;
/*I/P format
T
N K
a1 a2 ... an*/

// Array rotation Kth in right Direction
int main()
{
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    k%=n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    //LOGIC
    reverse(arr,arr+(n-k));
    reverse(arr+(n-k),arr+n);
    reverse(arr,arr+n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
  }
  
  return 0;}