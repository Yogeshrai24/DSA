#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n<=0)
      cout<<"invalid input"<<endl;
    else{
    cout<<"printing reverse array:"<<endl;

    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
}
    
    return 0;
}