#include <bits/stdc++.h>
using namespace std;
// Power Set of a string
/*Input
cab

Output
a
ab
abc
ac
b
bc
c
*/
vector<string> subsets;
void logic(string s,int i,int n,string subset){
  if(i==n){
    subsets.push_back(subset);
  }
  else{
    logic(s,i+1,n,subset);
    subset.push_back(s[i]);
    logic(s,i+1,n,subset);
    subset.pop_back();
  }
}

int main()
{
  //write your code here
  
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  string subset;
  logic(s,0,s.length(),subset);
  sort(subsets.begin(),subsets.end());
  for(int i=0;i<subsets.size();i++){
    cout<<subsets[i]<<endl;
  }

  return 0;
}