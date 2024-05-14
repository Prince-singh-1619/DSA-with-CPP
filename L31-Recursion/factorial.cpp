#include<iostream>
using namespace std;

int facto(int n){
    if(n==0){
        return 1;
    }

    return n*facto(n-1);
}

int main(){

    int fact, num;
    cout<<"Enter n "<<endl;
    cin>>num;
    cout<<"Factorial using recursion is "<<facto(num)<<endl;

    return 0;
}