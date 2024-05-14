#include<iostream>
using namespace std;

int update(int &n){
    n++;
}

int main(){
    int n=7;
    int &ref=n;

    cout<<"before "<<ref<<endl;
    update(n);
    cout<<"after "<<ref<<endl;
}