//covert arr to ll
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
   
    int main(){ 
    vector<int> arr ={2,3,4,7};
    node*head=convertarr2ll(arr);
   
    cout<<head->data;
    
}