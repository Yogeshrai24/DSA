//find power of two numbers(a,b) i.e. a^b
#include<iostream>
using namespace std;

int power(int a, int b){ //function definition  // function signature
    int ans=1;
    for(int i=1;i<=b;i++){  /*function body*/
      
        ans=ans*a;               
    }
    return ans;
}

int main(){

    int a,b;
    cin >> a >> b;

    int answer=power(a,b);//function call
    cout<<"answer is:"<<answer<<endl;
  return 0;  
}