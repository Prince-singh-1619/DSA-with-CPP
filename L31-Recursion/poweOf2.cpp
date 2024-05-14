#include<iostream>
using namespace std;

int power(int n){
    if(n == 0){
        return 1;
    }
    return 2*power(n-1);
}

int main(){

    int num;
    cout<<"enter n "<<endl;
    cin>>num;

    cout<<power(num)<<endl;
}