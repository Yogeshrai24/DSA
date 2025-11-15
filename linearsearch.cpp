#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){

    for(int i=0;i<n;i++){

        if(arr[i]==key)
            return 1;
    }
    return 0;
}

int main(){

    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"enter the element to search for:"<<endl;
    cin>>key;

    bool value=search(arr,n,key);

    if(value)
        cout<<"element is present"<<endl;

    else
        cout<<"element is absent"<<endl;    
    
    
    return 0;
}