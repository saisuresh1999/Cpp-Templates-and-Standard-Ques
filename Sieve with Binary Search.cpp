#include <bits/stdc++.h>
using namespace std;

int MAX_PRIME=1000033;
bool primeCheck[1000034]={};
vector<int> primeArray;
void sieve(){
    for(int i=2;i<=MAX_PRIME;i++){
        if(primeCheck[i]==0){
            for(int j=2*i;j<=MAX_PRIME;j+=i){
                primeCheck[j]=1;
            }
            primeArray.push_back(i);
        }
    }
    
}

int binarySearch(int n,int len){
    if(n<=primeArray[0])
        return 0;
    int i=0,j=len,mid=0;
    while(i<j){
        mid=(i+j)/2;
        if(primeArray[mid]==n)
            return mid;
        if(n<primeArray[mid])
            j=mid;
        else
            i=mid+1;
        
    }
    return -1;
}
