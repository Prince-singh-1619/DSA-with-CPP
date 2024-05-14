#include<iostream>
using namespace std;
int main(){
    int arr[10] = {9, 2, 5, 12, 32, 18};

    cout<<"The address of first index memory is "<< arr <<endl;
    cout<<"The address of first index memory is "<< &arr[0] <<endl;
    // both give the same output
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<(*arr)+1<<endl;
    cout<<*(arr+1)<<endl;  // arr gives the first element, on adding 1, it goes to 2nd element

    int i = 2;
    cout<< i[arr] <<" and "<< arr[i] <<endl;   // gives the same
}