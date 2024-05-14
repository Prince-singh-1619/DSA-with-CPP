#include<iostream>
using namespace std;

// int main() {

//     int abc = 2;
//     cout<<endl;

//     switch(abc) {
//         case 1: cout<<"This is  the first case"<<endl ;
//         break;
//         case 2: cout<<"This is  the second case"<<endl ;
//         break;
//         case 3: cout<<"This is  the third case"<<endl ;
//         break;
//         default: cout<<"This is  the default case"<<endl ;
//         break;
//     }
// }






// int main() {

//     int a,b;
//     char op;
    
//     cout<<"Enter a and b"<<endl;
//     cin>>a>>b;
    
//     cout<<"Enter the operation you want to perform"<<endl;
//     cin>>op;
    
//     switch(op) {
//         case '+' : cout<<(a+b)<<endl;
//         break;
//         case '-' : cout<<(a-b)<<endl;
//         break;
//         case '*' : cout<<(a*b)<<endl;
//         break;
//         case '/' : cout<<(a/b)<<endl;
//         break;
//         case '%' : cout<<(a%b)<<endl;
//         break;
//         default : cout<<"Enter a valid operation"<<endl;
//         break;
//     }
// }






int main() {
    
    int rs100, rs50, rs20, rs1, amount, n ;
    cout<<"Enter your amount"<<endl;
    cin>>amount;
    
    switch(1) {
        case 1: rs100 = amount/100;
        amount = amount%100;
        cout<<"The number Rs100 notes required are "<<rs100<<endl;
        
        case 2: rs50 = amount/50;
        amount = amount%50;
        cout<<"The number Rs50 notes required are "<<rs50<<endl;
        
        case 3: rs20 = amount/20;
        amount = amount%20;
        cout<<"The number Rs20 notes required are "<<rs20<<endl;
        
        case 4: rs1 = amount/1;
        amount = amount%1;
        cout<<"The number Rs1 notes required are "<<rs1<<endl;
    }
}







// int factorial(int num) {
//     int fact=1;
//     for(int i=1; i<=num; i++) {
//         fact = fact*i;
//     }
//     return fact;
// };

// int nCr(int n, int r) {
    
//     int fn = factorial(n);
//     int fr = factorial(r);
//     int fnr = factorial(n-r);
    
//     cout<<"The answer is "<< fn/(fr*fnr) << endl;
// return 0;
// }

// int main() {
//     int n, r;
//     cout<<"Enter n and r : "<<endl;
//     cin>>n>>r;
    
//     nCr(n,r);
// }