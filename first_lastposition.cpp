#include<iostream>
using namespace std;
int firstoccurrence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
           s=mid+1;
        
    }
    return ans;
}
int lastoccurrence(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
           s=mid+1;
        
    }
    return ans;
}




int main(){
    int arr[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++)
       cin >> arr[i];
       
    cout<<"enter the search element:"<<endl;
    cin>>key;

    int firstoccurr=firstoccurrence(arr,n,key);
    cout<<"first occurrence of "<<key<<"is at index "<<firstoccurr<<endl;
 
    int lastoccurr=lastoccurrence(arr,n,key);
    cout<<"last occurrence of "<<key<<"is at index "<<lastoccurr<<endl;
   
    
}