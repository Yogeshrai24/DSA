//intro to dll
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
    node(int data1)  {//it is amulticonstructor which is used if we dont want to pass null ptr every time whilr creating a node
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

  int main(){
    vector<int> arr ={2,3,4,7};
    node* head=convertarrtodll(arr);
    
    print(head);
    
}