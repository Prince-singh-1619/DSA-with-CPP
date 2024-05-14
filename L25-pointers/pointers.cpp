#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<"The address of variable num is "<< &num << endl;

    int *ptr = &num;
    cout<<"address of ptr "<<ptr<<endl;
    cout<<"value at ptr is "<<*ptr<<endl<<endl;

    char ab = 'A';
    char *p = &ab;
    cout<<"The address of variable ab is "<< &ab << endl;
    cout<<"address of p "<<p<<endl;
    cout<<"value at p is "<<*p<<endl<<endl;

    cout<<"Size of num is "<<sizeof(num)<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"Size of *p is "<<sizeof(p)<<endl;

// pointers can be initialised in this way also
    int value = 42;
    int *atval = 0;

    atval = &value;
// incrementing value by using pointer 
    (*atval)++;
    cout<<"The value of value is "<<value<<endl;

// copying or storing a pointer into another pointer
    int *val2 = atval;
    cout<<"The value at val2 is "<<*val2<<endl;


}