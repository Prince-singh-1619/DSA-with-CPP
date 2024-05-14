#include<iostream>
#include<array>
using namespace std; 

int main(){
    array<int,5> Arr = {1,2,3,4,5};

    for(int i=0; i<5; i++ ){
        cout<<Arr[i]<<endl;
    }
    
    cout<<"The element at 2nd index is "<<Arr.at(2)<<endl;
    cout<<"If the array is empty or not "<<Arr.empty()<<endl; // returns either true==1 or false==0
    
}