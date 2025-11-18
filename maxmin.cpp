//find max and min element of an array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int n){

    int maxi= INT_MIN ; //INT_MIN IS lower range of int -2^31

    for(int i=0;i<n;i++){

        maxi= max(maxi,num[i]); // inbuilt/predefined function for finding max element
         
        //if(num[i]>max)
        //   max=num[i];
    }
    //return maximum value
    return maxi;
}

int getMin(int num[], int n){

    int mini= INT_MAX ; //INT_MAX IS upper range of int 2^31

    for(int i=0;i<n;i++){

        mini= min(mini, num[i]);//inbuilt/predefined function for finding min element

       // if(num[i]< min)
        //     min=num[i];
    }
    //return minimum value
    return mini;
}

int main(){

    int n ;
    cin>>n ;

    int arr[100];
    
   

      //taking input
    for(int i=0;i<n;i++){
       
        cin>>arr[i];
    }

    cout<<"maximum value is:"<<getMax(arr,n)<<endl;
    cout<<"minimum value is:"<<getMin(arr,n)<<endl;
}