#include<iostream>
using namespace std;
int c=0;
void print(){
    if(c==5) return;
    cout<<"1"<<endl;
    c++;
    print();
}
int main(){
    
    print();
    return 0;
}
