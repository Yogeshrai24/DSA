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
    node(int data1)  {//it is amulticonstructor which is used if we dont want to pass null ptr every time whilr creating a node
        data=data1;
        next=nullptr;
    }
  

};
int main(){
    vector<int> arr ={2,3,4,7};
    node* y= new node(arr[0]);
    
    cout<<y->next;
    
}