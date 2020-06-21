#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *next;
}*head;

void insert(){
  int n,value;
  cin>>n;
  struct Node *temp;
  
  for(int i=0;i<n;i++){
    cin>>value;
    if(i==0){
      head=(struct Node*)malloc(sizeof(struct Node*));
      head->data=value;
      head->next=NULL;
      temp=head;
      continue;
    }
    else{
      temp->next=(struct Node*) malloc(sizeof(struct Node*));
      temp=temp->next;
      temp->data=value;
      temp->next=NULL;
    }
  }
  
}

void display(Node *head){
  struct Node *p;
  p=head;
  while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
    
  }
  
}

void middle(Node *head){
  struct Node *fast=head,*slow=head;
  if(head!=NULL){
    while(fast!=NULL && fast->next!=NULL){
      fast=fast->next->next;
      slow=slow->next;
    }
  }
  cout<<slow->data<<endl;
}

int main()
{
int t;
cin>>t;
while(t--){
  head=NULL;
  insert();
  //display(head);
  //cout<<endl;
  middle(head);
  
}
  
  return 0;
}
