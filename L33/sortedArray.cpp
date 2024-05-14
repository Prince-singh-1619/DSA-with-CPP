#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    // base case
    if(size==0 || size==1){
        return true;
    }

    // processing 
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
}

int main(){
    int arr[8] = {4, 5, 8, 10, 12, 18, 20, 23};
    bool ans = isSorted(arr, 8);
    cout<<endl<<ans<<endl;
    return 0;
}