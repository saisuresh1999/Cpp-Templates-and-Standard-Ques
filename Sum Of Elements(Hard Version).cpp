#include <bits/stdc++.h>
typedef long long   ll;
using namespace std;

// Hard Version
// arr[i] <= 10 power 100
/*Input
2
3 
10 20 30
4 
100 600 320 10

Output
60
1030*/
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string ans="",str1;
    cin>>str1;
    for(int ii=1;ii<n;ii++)
    {
      ans="";
     string str2;
     cin>>str2;
       if (str1.length() > str2.length()) 
          swap(str1, str2); 
        int n1 = str1.length(), n2 = str2.length(); 
         reverse(str1.begin(), str1.end()); 
          reverse(str2.begin(),str2.end());
          int carry=0;
          for(int i=0;i<n1;i++){
            int a=(str1[i]-'0')+(str2[i]-'0')+carry;
            ans.push_back(a%10+'0');
            carry=a/10;
            
          }
          
          for(int i=n1;i<n2;i++){
            int a=carry+(str2[i]-'0');
            ans.push_back(a%10+'0');
            carry=a/10;
          }
          if(carry)
          ans.push_back(carry+'0');
          
          reverse(ans.begin(),ans.end());
          
          str1=ans;
     
     
    }
    cout<<str1<<endl;
  }
  return 0;
}