#include<iostream>
using namespace std;

int power(int a, int b){
    int ans=1;

    // base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    ans = power(a,b/2);

    // if b is even
    if(b%2==0){
        return ans * ans;
    }
    // if b is odd
    else{
        return a * ans * ans;
    }
}

int main(){
    int a, b;
    cout<<"Enetr a and b "<<endl;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans<<endl;

    return 0;
}