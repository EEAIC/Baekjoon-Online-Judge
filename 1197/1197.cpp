#include <iostream>
#include <list>
#define INF 2147483647

using namespace std;

class Graph {
    public:
        int V;
        list<pair<int, int>> *adj;
        long long int *key;
        bool *mstSet;
        int dist = 0;
        Graph(int V) {
            this->V = V;
            adj = new list<pair<int, int>>[V];
            key = new long long int[V];
            mstSet = new bool[V];
            for (int i = 0; i < V; i++) {
                key[i] = INF;
                mstSet[i] = false;
            }
        }
        void addEdge(int u, int v, int w) {
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }
        void getShortestWeight() {
            key[0] = 0;

            for (int count = 0; count < V; count++) {
                int minKey = INF;
                int minVertex;          
                for (int i = 0; i < V; i++) {
                    if (!mstSet[i]) {
                        minVertex = i;
                        minKey = key[i];
                        break;
                    }
                }

                for (int i = 0; i < V; i++) {
                    if (!mstSet[i] && key[i] < minKey) {
                        minKey = key[i];
                        minVertex = i;
                    }
                }

                dist += minKey;
                mstSet[minVertex] = true;

                
                for (list<pair<int, int>>::iterator it = adj[minVertex].begin(); it != adj[minVertex].end(); it++) {
                    if (mstSet[it->first] == false && it->second < key[it->first]) {
                        key[it->first] = it->second;
                    }
                }
                
            }

        }
};

int main() {
    int V, E, u, v, w;
    cin >> V >> E;
    Graph graph(V);
    for (int i = 0; i < E; i++) {
        cin >> u >> v >> w;
        graph.addEdge(u - 1, v - 1, w);
    }

    graph.getShortestWeight();
    cout << graph.dist;

    return 0;
}