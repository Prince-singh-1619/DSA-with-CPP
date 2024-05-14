#include<iostream>
#include "villain.cpp" // you can also import class from other files
using namespace std;

class Hero{
    //properties
    private:
    int health = 70; 
    // if there is no any properties in a class, then also 
    // it gets a memory of 1 byte in order to preserve it's identity / track
   
    public:
    char level = 'B';

    // Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    //Setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};

int main(){

//---> creation of object 
    // Hero bhairav;
    // villain jutha; 

    // cout<<"bhairav health is "<<bhairav.health()<<endl;
    // // use setter
    // bhairav.setHealth(80);
    // bhairav.level = 'A';
    // cout<<"health is "<<bhairav.getHealth()<<endl;

    // cout<<"Size "<<sizeof(bhairav)<<endl;
    // cout<<"health of hero is "<<bhairav.health<<endl;
    // cout<<"and level is "<<bhairav.level<<endl;
    
//---> static allocation
    Hero a;
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;  //OR
    cout<<"health is "<<b->getHealth()<<endl;
    return 0;
}