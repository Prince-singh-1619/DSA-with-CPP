#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(12);
    q.push(15);
    q.push(8);
    cout<<"Front of queue is "<<q.front()<<endl;
    
    q.pop();
    q.pop();

    cout<<"The size of queue is "<<q.size()<<endl;
}