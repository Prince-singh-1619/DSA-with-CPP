#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i] == 0){
            i++;
        }
        while(arr[j] ==1){
            j--;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
  int arr[11] = {0,0,1,0,1,1,0,0,1,1,0};
  
  sort(arr, 11);
  print(arr, 11);
  
}