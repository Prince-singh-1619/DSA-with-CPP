#include<iostream>
using namespace std;

void update(int** p2){
    // p2 = p2 + 1;
    // kuch change hoga  -no

    // *p2 = *p2 + 1;
    // kuch change hoga   -yes

    **p2 = **p2 + 1;
    // kuch change hoga   -yes
}

int main(){
    int a = 5;
    int* p = &a;
    int** p2 = &p;

    cout<<"Sab sahi hai abhi"<<endl;

    // cout<<p2<<endl;
    // cout<<p<<endl<<endl;

    // cout<<*p2<<endl;
    // cout<<p<<endl<<endl;

    // cout<<a<<" "<<*p<<" "<<**p2<<endl<<endl;

    // cout<<&a<<" "<<p<<" "<<*p2<<endl<<endl;
    
    update(p2);

}