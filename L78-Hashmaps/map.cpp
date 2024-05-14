#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

   //program to print dominant in an array which occurs more than n/3 times
      int dominantNumber(int* arr, int n) {
         unordered_map<int, int> m1;
         for(int i=0; i<n; i++){
            m1[arr[i]]++;
         }

         for(auto j: m1){
            if(j.second > n/3){
               return j.first;
            }
         }
         return -1;
      }

int main(){

 //creation
    unordered_map<string, int> m;

 //insertion & it's types
    //1 
    pair<string, int> p = make_pair("Prince", 3);
    m.insert(p);

    //2
    pair<string, int> q("Singh", 2);
    m.insert(q);

    //3
    m["mera"] = 1;
    m["mera"] = 4;  //in this case, the map of no 1 will get updated to map no 4, and 1 no. will be empty.
    //remember, we first insert and if we try to insert again the same thing, it will get updated rather than repeating.

 //search
    cout<<m["Prince"]<<endl;
    cout<<m.at("Singh")<<endl;
    //now, if try to search a key that does not exist
    // cout<<m.at("unknown")<<endl;  //this will give error
   //**********//
    //But, this will not give error
    cout<<m["unknown2"]<<endl;  //instead of giving error, it will map this with 0(zero).
    cout<<m.at("unknown2")<<endl;

 //size
    cout<<m.size()<<endl;

 // to check if a key is present or not
    cout<<m.count("Prince")<<endl;  //if present, prints 1
    cout<<m.count("not")<<endl;     //if absent, prints 0

 // deletion
    m.erase("Prince");
    cout<<m.size()<<endl;

 //printing all using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;   
        //in unordered mapping, the order of elements is not preserved
    }

}