#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source is "<<src<<" & destination is "<<dest<<endl;
    if(src==dest){
        return;
    }

    //processing 
    src++;

    //recurrence relation
    reachHome(src, dest);
}

int main(){

int src, dest;
cout<<"Enter source and destination "<<endl;
cin>>src>>dest;

reachHome(src, dest);
}