//find nCr

#include<iostream>
using namespace std;

//find the factorial of n
int fact(int n){

   int f=1;
   for(int i=1;i<=n;i++){
     f=f*i;
   }
   return f;
    
} 
// find nCr
int nCr(int n,int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);
    int ans=num/denom;
    return ans;
}
    
int main(){

    int n,r;
    cin >> n >>r;
    
   int answer=nCr(n,r);

    cout <<"answer is :"<<answer<<endl;
    return 0;  
}