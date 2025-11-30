#include<iostream>
using namespace std;

void passbyvalue(int n){ //it creates a copy of n
    
    n++;//only this n will chnage,no change in main function
    cout<<"n is="<<n<<endl;
} 
    
int main(){

    int n;
    cin >> n ;

    passbyvalue(n);
    
    cout<<"n is ="<<n<<endl;
    return 0;  
}