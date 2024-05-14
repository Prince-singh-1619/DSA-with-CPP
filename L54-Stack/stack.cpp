#include<iostream>
#include<stack>
using namespace std;

class stack{
    //properties
    public: 
        int *arr;
        int top;
        int size;

    //behaviour
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    //creating a stack
    // stack<int>s;

    //push operation
    // s.push(4);
    // cout<<"The top element is "<<s.top()<<endl;

    // s.push(7);
    // cout<<"The top element is "<<s.top()<<endl;
    
    // //pop operation
    // s.pop();
    // cout<<"The top element is "<<s.top()<<endl;

    // if(s.empty()){      //it means if stack empty == true
    //     cout<<"The stack is empty"<<endl;
    // }
    // else{
    //     cout<<"The stack is not empty"<<endl;
    // }

    // cout<<"The size of stack is "<<s.size()<<endl;
}