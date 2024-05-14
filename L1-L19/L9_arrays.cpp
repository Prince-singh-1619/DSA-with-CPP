#include <iostream>
using namespace std;


int main() {
   string cars[5] = {"tata", "mahindra", "revolt"};
   char ch[5] = {'q', 'w', 'e', 'r', }; 
   cout<<"The value at index 0 is "<< cars[2] <<endl;
   cout<<"The value at index 0 is "<< ch[0] <<endl;
   return 0;
}









void printArray(string arr[], int size) {
     cout<<"Printing array"<<endl;
     for(int i=0; i<size; i++) {
         cout<<"The value at index "<< i <<" is "<<arr[i]<<endl;
     }
     cout<<"Printing done"<<endl;
 }
 int main() {
     int size;
   string cars[5] = {"tata", "mahindra", "revolt", "hop", "porsche"};
   char ch[5] = {'q', 'w', 'e', 'r', };  
//   cout<<"The value at index 0 is "<< cars[2] <<endl;
//   cout<<"The value at index 0 is "<< ch[0] <<endl;
printArray(cars, 5);
}