#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    int hcf=1;
    for (int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0) 
           hcf= i;
    }
    return hcf;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c= gcd(a,b);
    cout<<c;
}
