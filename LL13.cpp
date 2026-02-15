//insertion in dll 
#include<bits/stdc++.h>
using namespace std;
class node{
  public:  
    int data;
    node* next;
    node*back;
  public:
    node(int data1,node*next1,node*back1)  {
        data=data1;
        next=next1;
        back =back1;
    }
   public:
    node(int data1)  {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
  
node* convertarrtodll(vector<int> &arr){
    node*head=new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;

}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node*insertbefhead(node*head,int val){
   node*newhead=new node(val,head,nullptr);
   head->back=newhead;
    return newhead;
}
node*insertbeftail(node*head,int val){
    if(head->next==NULL) return insertbefhead(head,val);
    node*curr=head;
   
   while(curr->next!=NULL){
    curr=curr->next;
   }
   node*prev=curr->back;
   node*temp=new node(val,curr,prev);
   prev->next=temp;
   
   curr->back=temp;
  
    return head;
}
node*insertbefk(node*head,int val,int k){
    if(k==1) return insertbefhead(head,val);
    node*temp=head;
   int c=0;
   while(temp!=NULL){
    c++;
    if(c==k) break;
    temp=temp->next;
   }
   node*prev=temp->back;
   node*curr=new node(val,temp,prev);
   prev->next=curr;
   
   temp->back=curr;
  
    return head;
}


  int main(){
    vector<int> arr ={2,3,4,7};
    node* head=convertarrtodll(arr);
    head=insertbefk(head,10,1);
    
    print(head);
    
}