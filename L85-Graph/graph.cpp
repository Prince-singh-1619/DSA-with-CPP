#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename T>   //after this you can have any type of data e.g. int, char, string etc, just replace T with it
class graph{
    public: 
        unordered_map<T, list<T>> adj;

        void addEdge(T u, T v, int direction){
            //direction == 0 -> undirected graph
            //direction == 1 -> directed graph
            
            //create an edge from u to v
            adj[u].push_back(v);
            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i: adj){
                cout<<i.first<<" -> ";
                for(auto j:i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }

};

int main(){
    int n;
    cout<<"Enter the no. of node "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the no. of edges "<<endl;
    cin>>m;

    graph<int> g;   //here, declaration of T is necessary, in this case, it's "int"

    for(int i=0; i<m; i++){
        int u, v;
        cin>> u >> v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    
    return 0;
}