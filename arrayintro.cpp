#include<iostream>
using namespace std;

void printarray(int arr[],int size){

    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int num[7]={1,3,2,43,22,32,3};

    printarray(num,7);

    int third[5]={0};//initializing entire array with zero(it is valid only for zero)
    
    printarray(third,5);

    int sec[3]={1};//this will not initialize entire array with 1, it initialize one element as 1

    printarray(sec,3);
}