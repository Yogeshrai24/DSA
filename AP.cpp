//find the nth term of an ap
#include<iostream>
using namespace std;

int AP(int n){
    
    return (3*n+7);
} 
    
int main(){
    int n;
    cin >> n;

    int nth_term=AP(n);

    cout<< "nth term of AP is :"<<nth_term<<endl;

    
    return 0;  
}