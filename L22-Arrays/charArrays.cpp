#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;   
    }
    return count;
}

int main(){
    
    char ch[20];
    
    cout<<"Enter your strings "<<endl;
    cin>>ch;
    cout<<"Your entered string is "<<ch<<endl;
    
    int len = getLength(ch);
    cout<<"The length of entered string is "<<len<<endl;
    
    reverse(ch, len);
    cout<<"The reversed string is "<<ch<<endl;
    
    
}