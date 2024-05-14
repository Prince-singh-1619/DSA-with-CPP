#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    char ch='a';
    char *c=&ch;

    cout<<"size of ch is "<<sizeof(ch)<<", and size of c is "<<sizeof(c)<<endl;

    // creating a variable size array
    int n;
    cin>>n;

    int *arr = new int[n];
    // variable size of array is created 
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr, n);
    cout<<"The sum of array is "<<ans<<endl;

    return 0;
}