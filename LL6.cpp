//deletion of kth element of  ll
#include<bits/stdc++.h>
using namespace std;
class node{
  public:  
    int data;
    node* next;
  public:
    node(int data1,node*next1)  {
        data=data1;
        next=next1;
    }
   public:
    node(int data1)  {
        data=data1;
        next=nullptr;
    }
  

};

node* convertarr2ll(vector<int> &arr){
    node*head=new node(arr[0]);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
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

node*removek(node*head,int k){
    if(head==NULL) return head;
   
    if(k==1){

         node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int c=0;
    node*temp=head;
    node*prev=NULL;
    while(temp!=NULL){
        c++;
        if(c==k){
        prev->next=prev->next->next;
        free(temp);
        break;
    }
    prev=temp;
    temp=temp->next;
    
    }
    
    return head;
}
   
    int main(){ 
    vector<int> arr ={2,3,4,7};
    node*head=convertarr2ll(arr);
    head=removek(head,3);
    print(head);
   
    
    
}