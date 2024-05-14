#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    
    //base case
    if(n==0){
        return 0;
    }
    //processing
    int sum = arr[0] + getSum(arr+1, n-1);
    
    return sum;
}

int main(){
    int arr[5] = {5,4,8,2,7};
    int sum = getSum(arr, 5);

    cout<<"The sum of array is "<<sum<<endl;

    return 0;
}