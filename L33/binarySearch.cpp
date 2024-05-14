#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key){

    int mid = start + (end-start)/2;

    // base case
    if(start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }

    // processing
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }
}

int main(){
    int arr[8] = {4,8,10,15,19,23,26,30};
    int ans = binarySearch(arr, 0, 7, 15);
    cout<<ans<<endl;
}