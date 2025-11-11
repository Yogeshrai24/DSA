//for array sorted in ascending order
#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
       cin >> arr[i];
       
    cout<<"enter the search element:"<<endl;
    cin>>key;

    
    
        int start=0;
        int end=n-1;
        int mid;
   
         while( start<=end){
           
            mid=start+(end-start)/2;//instead of(start+end)/2 we write this modified formula to 
                                   //avoid the range exceeding values of mid calculation
           
           if(arr[mid]==key){
               cout<<"element is at index"<<mid<<endl;
               break;}
   
           else if(key>arr[mid]){
                start=mid+1;//right part
           }
           else {
             end=mid-1;//left part
             }
            }
        
          cout<<"element is notfound"<<endl;

           
   
           
       }
    
