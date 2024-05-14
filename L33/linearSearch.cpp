#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){

    // base case
    if(n==0){
        // string str1 = "Array is empty";
        return false;;
    }

    //processing
        // string str2 = "Found";
    if(key==arr[0]){
        return true;
    }
    else{
        return search(arr+1, n-1, key);
    }

    // else{
    //     string str3 = "Not found";
    //     return str3;
    // }
}

int main(){
    int arr[6] = {4,5,1,8,12,3};
    bool ans = search(arr, 6, 18);

    cout<<ans<<endl;

    return 0;
}