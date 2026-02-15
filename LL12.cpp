//deletion in dll 
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
node*deletehead(node*head){
    if(head ==NULL||head->next==NULL) return NULL;
    node*temp=head;
    head=head->next;
    head->back=NULL;
    temp->next=NULL;
    delete temp;
    return head;
}
node*deletetail(node*head){
    if(head ==NULL||head->next==NULL) return NULL;
    node*temp=head;
   
    while(temp->next!=NULL){
    temp=temp->next;
    }
    node*prev=temp->back;
    temp->back=nullptr;
    prev->next=NULL;
    delete temp;
    return head;
}
node*deletek(node*head,int k){
    if(head ==NULL) return NULL;
    int c=0;
    node*temp=head;
   
    while(temp!=NULL){
        c++;
        if(c==k) break;
       temp=temp->next;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL&&front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->back=NULL;
        temp->next=NULL;
    delete temp;
    return head;
}
}


  int main(){
    vector<int> arr ={2,3,4,7};
    node* head=convertarrtodll(arr);
    head=deletek(head,1);
    
    print(head);
    
}