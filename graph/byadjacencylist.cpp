#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V; // number of vertices
    list<int> *l; // adjacency list
public:
    Graph(int V){
        this ->V = V;
        l = new list<int>[V];// arr = new int [v]
    }
    //now create a function to add an edge
    void edge(int u, int v){   // u-->v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
      for (int u=0;u<V;u++){
        list<int> neighbors= l[u];
        cout<< u<<"-->";
        for(int v: neighbors){
            cout<<v<<",";
        }
        cout<<endl;
      }
    }


};



int main(){
    Graph graph(5);
    graph.edge(0,1);
    graph.edge(1,2);    
    graph.edge(1,3);
    graph.edge(2,3);
    graph.edge(2,4);
    graph.edge(0,1);
    graph.print();
    return 0;
}