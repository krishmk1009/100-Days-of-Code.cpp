#include <bits/stdc++.h>

using namespace std;
template <typename T>

class Graph {
    
    public:
        unordered_map<T,list<T>> adj;
    
        void createEdge(T u, T v , bool direction){
            // direction = 0 for undirecte
            // direction =1 for undirected
            
            adj[u].push_back(v);
            
            if(direction ==0){
                adj[v].push_back(u);
                
            }
        }
        
        void printList(){
            for(auto it:adj){
                cout<<it.first<<":";
                for(auto sec:it.second){
                    cout<<sec<<" ";
                }
                cout<<endl;
            }
            
        }
    
};

int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    
    Graph<int> g;
    
    for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            //creating edge
            g.createEdge(u,v,0);
        
    }
    //printing the whole graph in adjancy list form
    g.printList();
    
    

    return 0;
}
