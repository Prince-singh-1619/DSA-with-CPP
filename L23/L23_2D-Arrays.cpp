#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][4], int target, int n, int m){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int n, int m){
    cout<<"Printing the sum : "<<endl;
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowsum(int arr[][4], int row, int col){
    int rowIndex;
    int maxi=INT_MIN;
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<4; j++){
            sum = sum+arr[i][j];
        }
        if(sum>INT_MIN){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){

    int nums[3][4] = { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} };

    // printing the array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<nums[i][j]<<" ";
        }
    }
    cout<<endl;
    

    cout<<"Enter your element "<<endl;
    int target;
    cin>>target;
    if(isPresent(nums, target, 3, 4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    printSum(nums,3,4);

    cout<<"the largest row sum and index is "<<largestRowsum(nums, 3, 4)<<endl;

    return 0;
}