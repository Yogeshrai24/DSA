#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"enter the amount"<<endl;
    cin>> amount;
    int note;
    int num=1;
    
    switch(num){
        case 1:note=(amount/100);
                 cout <<"no. of 100 rupee notes="<<note<<endl;
                    amount=amount-(note*100);
                

        case 2:note=(amount/50);
                cout<<"no. of 50 rupee notes="<<note<<endl;
                 amount=amount-(note*50);
                
        
        case 3:note=(amount/20);
                cout<<"no. of 20 rupee notes="<<note<<endl;
                  amount=amount-(note*20);
                
        
        case 4:note=(amount/1);
               cout <<"no. of 1 rupee notes="<<note<<endl;
                 amount=amount-(note*1);
                break;
        default:cout<<"enter valid input"<<endl;         
    }
    return 0;
}
   