//character hashing concept
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    //PRE-COMPUTATION PART
    int hash[26]={0}; //hash array size will be one greater than the original arr
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }


    int q;
    cin>>q;//number of querries you want
    
    while(q--){
        char c;//the number whose freq you want
        cin>>c;

         //FETCHING PART
    cout << hash[c-'a']<<endl;
    }

   return 0;

}