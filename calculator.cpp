#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;

    cout << "enter first number"<<endl;
    cin >> a;

    cout << "enter second number"<< endl;
    cin>>b;
     
    cout << "enter the operator"<<endl;
    cin>>ch;

    switch(ch){
        case '+':
             cout<<"a+b="<<a+b<<endl;
             break;
        
        case '-':
             cout<<"a-b="<<a-b<<endl;
             break;
             
        case '*':
             cout<<"a*b="<<a*b<<endl;
             break;
             
        case '/':
            cout<<"a/b="<<a/b<<endl;
            break;
            
        default:
            cout<< "invalid opertion"<<endl;
            break;    
    }
    return 0;
}