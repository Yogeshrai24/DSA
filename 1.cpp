// 123
// 123
// 123
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         { cout<<j;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }




// 321
// 321
// 321
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         { cout<<n-j+1;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// 123
// 456
// 789
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     int count =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         { cout<<count<<" ";
//          count=count+1;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// 1
// 22
// 333
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i)
//         { cout<<i;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }





// 1
// 23
// 456
// 789
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i)
//         { cout<<count;
//           count=count+1;
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// 1
// 23
// 345
// 4567
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
   
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         int count=i;
//         while(j<=i)
//         {  ;
//            cout<<count;
//            count+=1;
//            j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
//task=try to print without using count

// 1
// 21
// 321
// 4321
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         int value=i;
//         while(j<=i)
//         { cout<<value;
//             value=value-1;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// here we can print (i-j+1) instea

// AAA
// BBB
// CCC
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         { char ch="A"+i-1 ;
//          cout<<ch;
//          j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// ABC
// ABC
// ABC
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;

//     while(i<=n){
//         int j=1;
//         while(j<=n)
//         { char ch='A'+j-1;
//           cout<<ch;
         
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// ABC
// DEF
// GHI
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
   
//     while(i<=n){
//         int j=1;
//         char ch='A';
//         while(j<=n)
//         { cout<<ch;
//           ch=ch+1;
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// ABC
// BCD
// CDE
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;

//     int i=1;
   
//     while(i<=n){
//         int j=1;
        
//         while(j<=n)
//         { char ch='A'+i+j-2;
//             cout<<ch;
         
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// A
// BB
// CCC
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
   
//     while(i<=n){
//         int j=1;
        
//         while(j<=i)
//         { char ch='A'+i-1;
//             cout<<ch;
        
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// A
// BC
// DEF
// GHIJ
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     char ch='A'
   
//     while(i<=n){
//         int j=1;
        
//         while(j<=i)
//         { 
//           cout<<ch;
//           ch=ch+1;
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// A
// BC
// CDE
// DEFG
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
   
//     while(i<=n){
//         int j=1;
        
//         while(j<=i)
//         {  char ch='A'+i+j-2;
//             cout<<ch;
        
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// D
// CD
// BCD
// ABCD
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
   
//     while(i<=n){
//         int j=1;
//         char start = 'A'+n-i;
//         while(j<=i)
//         { 
//             cout<<start;
//             start=start+1;
//           j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

//     *
//    **
//   ***
//  ****
//  #include<iostream>
//  using namespace std;
 
//  int main() {
//      int n;
//      cin>>n;
 
//      int i=1;
    
//      while(i<=n){
//         //space print krlo
//          int space=n-i;
//          while(space){
//             cout<<" ";
//             space=space-1;
//          }
//          //star print karlo
//          int j=1;
//          while(j<=i)
//          { 
//              cout<<"*";
         
//            j=j+1;
//          }
//          cout<<endl;
//          i=i+1;
//      }
//  } 

//     1
//    121 
//   12321
//  1234321
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
   
   
   int i=1;
  
    while(i<=n){
       //print space
         int space=n-i;
        while(space)
       { cout<<" ";
         space=space-1;
         
       }
       //print 1 triangle
       int j=1;
       while(j<=i){
         cout<<j;
          j=j+1;
       }
       //print 2 triangle
       int start=i-1;
       while(start){
         cout<<start;
         start=start-1;
       }
      cout<<endl;
      i=i+1;
  }
}   