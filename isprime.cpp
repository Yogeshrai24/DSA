#include<iostream>
using namespace std;

/*return 1 ->prime
return 0->not prime*/


bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;//divide ho gya,not prime
    }
    return 1;//prime
} 
    
int main(){

    int n;
    cin >> n ;
    if (isprime(n)){
        cout<<"number is prime"<<endl;
    }
    else
        cout<<"number is not prime"<<endl;
    
  return 0;  
}