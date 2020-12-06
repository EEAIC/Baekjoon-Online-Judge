#include <iostream>
#include <list>
#include <vector>
#define INF 6000 * 10000
using namespace std;

class Graph {
    public:
        int V;
        bool Negative_Cycle = false;
        list<pair<int, int>> *adj;
        vector<long long int> dist;
        Graph(int V) {
            this->V = V;
            adj = new list<pair<int, int>>[V];
            dist = vector<long long int>(V, INF);
        }   
        void addEdge(int u, int v, int w);
        void shortestPath();
        void printPath();
};

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
}

void Graph::shortestPath() {
    
    dist[0] = 0;
    
    for (int j = 0; j < V - 1; j++) {
        for (int u = 0; u < V; u++) {
            for (list<pair<int, int>>::iterator it = adj[u].begin(); it != adj[u].end(); it++) {
                if (dist[u] != INF && dist[it->first] > dist[u] + it->second) {
                    dist[it->first] = dist[u] + it->second;
                }
            }
        }
    }

  
    for (int u = 0; u < V; u++) {
        for (list<pair<int, int>>::iterator it = adj[u].begin(); it != adj[u].end(); it++) {
            if (dist[u] != INF && dist[it->first] > dist[u] + it->second) {
                Negative_Cycle = true;
                return;
            }
        }
    }
}

void Graph::printPath() {
    if (Negative_Cycle) {
        cout << -1 << endl;
    }
    else {
        for (int i = 1; i < V; i++) {
            if (dist[i] == INF) {
                cout << -1 << endl;
            } else {
                cout << dist[i] << endl;
            }
        }
    }
}

int main() {
    int N, M, u, v, w;
    cin >> N >> M;
    Graph graph(N);
    for (int i = 0; i < M; i++) {
        cin >> u >> v >> w;
        graph.addEdge(u - 1, v - 1, w);
    }

    graph.shortestPath();
    graph.printPath();
    return 0;
}
