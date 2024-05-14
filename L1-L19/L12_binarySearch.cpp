#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    int mid=(start+end)/2;
    
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }  
    return -1;
}

int main(){
    int even[6] = {5,8,12,18,23,30};
    int odd[5] = {1,5,8,13,17};
    
    int ans = binarySearch(odd, 5, 17);
    
    cout<<"The index of search key is "<<ans<<endl;
}