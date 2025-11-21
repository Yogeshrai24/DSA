#include<iostream>
using namespace std;

//this function gives integer part of solution
long long int getsqrt(int n){ //here we'll not use int to avoid range errors

    int s=0,e=n;//ans lies in range 0 to n
    int ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        
        if(square==n)
           return mid;
        if(square>n){
            e=mid-1;
        } 
        else{  //when square<n
            ans=mid;
            s=mid+1;
    } 

    }
    return ans;

}

//this function gives more precise solution with decimal places

double moreprecisesol(int n,int precision,int tempans){//use double instead of int to avoid errors

    double factor=1;
    double realans=tempans;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=realans; j*j < n; j=j+factor){
            realans=j;
        }
    }
    return realans;
}

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin >> n;
    int precision;
    cout<<"enter the no of decimal places wanted in sol "<<endl;
    cin>>precision;

    int tempans= getsqrt(n);

    double realans=moreprecisesol(n,precision,tempans);
    cout <<"answer is "<<realans<<endl;
}