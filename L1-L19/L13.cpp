#include<iostream>
using namespace std;

// finding first and last index of an element in an sorted array using binary search

int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2; 
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if (arr[mid]>key){
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[13] = {1,2,2,3,3,3,4,4,5,5,6,6,8};
    
    cout<<"The leftmost index of key element is "<<firstOcc(even, 13, 3)<<endl;
    cout<<"The rightmost index of key element is "<<lastOcc(even, 13, 3)<<endl;
}