#include<iostream>
#include<bits/stdc++.h>
//#include<array>//for array 
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at index 2 is  "<< a.at(2)<<endl;
    cout<<"array is empty"<<a.empty()<<endl;

}