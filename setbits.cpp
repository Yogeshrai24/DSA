//count the total no. of set bits in two numbers
#include<iostream>
using namespace std;

int count_bits(int a){
    int count=0,r;
    while(a!=0){
        r = a&1;
        if(r&1){
           count++;}
        a=a>>1;   
    }
    return count;
       
}

int set_bits(int a,int b){

    return (count_bits(a)+count_bits(b));
} 
    
int main(){
    int a , b;;
    cin >> a >> b;

    int number=set_bits(a,b);

    cout<< "no. of set bits in a and b is :"<<number<<endl;

    return 0;  
}