//reverse dll 
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
  
node* reversedll(node*head){
    if (head == NULL || head->next == NULL)
        return head;
    node*last=NULL;
    node*curr=head;
    while(curr!=NULL){
        last=curr->back;
        curr->back=curr->next;
        curr->next=last;
        curr=curr->back;
    }
    return (last->back);
}


  int main(){
    vector<int> arr ={2,3,4,7};
    node* head=convertarrtodll(arr);
    head=reversedll(head);
    
    print(head);
    
}