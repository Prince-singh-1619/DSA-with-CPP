#include<iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n) {
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n) {
    int min = INT_MAX;
    for(int i=0; i<n; i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    
    int arr[100];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    cout<<"The maximum element in the array is "<<getMax(arr, size)<<endl;
    cout<<"The minimum element in the array is "<<getMin(arr, size)<<endl;
}














void reverseArray(int arr[], int n){
    int start=0, end=(n-1), temp;
    while(start<=end){
        temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }
   
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6] = {2,4,6,8,10,12};
    int brr[5] = {3,6,9,12,15};
    
    reverseArray(arr, 6);
    reverseArray(brr, 5);
    
    printArray(arr, 6);
    printArray(brr, 5);
}