//find the nth term of fibonacci series
#include<iostream>
using namespace std;

int fibonacci(int n){
    int a=0,b=1;

    if(n==0){
       return 0;}
   
    else if(n==1){
         return 1;}
     
    else{
        for(int i=2;i<=n;i++){
            int temp=a+b;
            a=b;
            b=temp;
        }
    } 
    return b;   
    } 

int main(){
    int n;
    cin>>n;

    int nth_term=fibonacci(n);

    cout<<"nth term of fibonacci series is:"<<nth_term<<endl;

   return 0;
}