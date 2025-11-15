//hashing concept
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //PRE-COMPUTATION PART
    int hash[13]={0}; //hash array size will be one greater than the original arr
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }


    int q;
    cin>>q;//number of querries you want
    
    while(q--){
        int num;//the number whose freq you want
        cin>>num;

         //FETCHING PART
    cout << hash[num]<<endl;
    }

   return 0;

}