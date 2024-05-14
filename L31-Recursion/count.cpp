#include<iostream>
using namespace std;

int count(int n){
    // base case
    if(n == 1){
        return 1;
    }
    
    cout<< n<<" ";
   // recurrence relation
    count(n-1);
}

int main(){

    int num;
    cout<<"enter n "<<endl;
    cin>>num;

    cout<<count(num)<<endl;
}