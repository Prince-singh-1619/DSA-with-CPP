#include<iostream>
using namespace std;
int main(){
    int arr[6] = {4, 6, 15, 25, 18, 47};
    char ch[6] = "abcde";   // last index always have a null value

    cout<<arr<<endl;   // prints address
    cout<<ch<<endl;     // prints entire content

    char *c = &ch[0];
    cout<<c<<endl;      //prints the first content, but doesn't stop until null found

}