#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            cnt++;
        else if(s[i]==')')
            cnt--;
        if(cnt<0)
            return 0;
    }
    return (cnt==0);
}
void removeInvalid(string s){
    queue<string> q;
    set<string> visited;
    q.push(s);
    string t;
    while(!q.empty()){
        s=q.front();
        q.pop();
        
        bool temp=isvalid(s);
        if(isvalid(s)){
            cout << s << endl;
            return;
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]!=')' && s[i]!='(')
                continue;
            t = s.substr(0,i)+s.substr(i+1);
            if(visited.find(t)==visited.end()){
                q.push(t);
                visited.insert(t);
            }
        }
    
    }
}
int main(){
    string s;
    cin >> s;
    
    removeInvalid(s);
    //cout << s;
    return 0;
}