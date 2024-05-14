#include<iostream>
using namespace std;

int main() {
    int a=4, b=1, n, sum=0;
    cout<<"a & b = "<< (a&b) <<endl; 
    cout<<"a | b = "<< (a|b) <<endl; 
    cout<<"~a = "<< (~a) <<endl;
    cout<<"a ^ b = "<< (a^b) <<endl; 
    cout<<"a ^ b = "<< (12<<2) <<endl;
    cout<<a++<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++) {
        sum= sum+i;    
    }
    cout<<sum<<endl;
}


int main() { 
    int a=0, b=1,n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for( int i=1; i<=n; i++) {
        int nextNum=(a+b);
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
}




int main() {
    int n;
    cout<<"enter N"<<endl;
    cin>>n;
    bool isPrime =1;
    for(int i=2; i<n; i++) {
        if(n%i==0){
        // cout<<"The number is not prime"<<endl;
        isPrime=0;
        break;
        }
    }
    if(isPrime==0) {
        cout<<"is not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }