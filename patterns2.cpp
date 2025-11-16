#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i-0;j++){
           
            cout << " " ;
            
        }
        
    
    
        for(int j=1;j<2*i+0;j++){
           
            cout << "*" ;
            
        }
        
        for(int j=1;j<n-i-0;j++){

           
            cout << " " ;
            
        }
        cout<< endl;
    }
    
    for(int k=0;k<n;k++){
        
     for(int l=1;l<k;l++){

           
            cout << " " ;
            
        }
    
        for(int l=1;l<2*n-2*k+0;l++){
           
            cout << "*" ;
            
        }
        
       
        
        for(int l=1;l<k;l++){
           
            cout << " " ;
            
        }
        cout<< endl;
    }
    
    
       
    

    return 0;
}