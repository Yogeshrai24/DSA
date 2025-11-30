//map concept
#include<iostream>
#include<map>;//headerfile for map
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //PRE-COMPUTATION PART
    map<int, int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;
    cin>>q;//number of querries you want
    
    while(q--){
        int num;//the number whose freq you want
        cin>>num;

         //FETCHING PART
    cout << mpp[num]<<endl;
    }

   return 0;

}