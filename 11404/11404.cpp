#include <iostream>
#include <list>
#define INF 100000 * 100

using namespace std;

class Graph {
    public:
        int V;
        list<pair<int, int>> *adj;
        long long int **dist;
        Graph(int V) {
            this->V = V;
            adj = new list<pair<int, int>>[V];
            dist = new long long int*[V];
            for (int i = 0; i < V; i++) {
                dist[i] = new long long int[V];
                for (int j = 0; j < V; j++) {
                    if (i == j) dist[i][j] = 0;
                    else dist[i][j] = INF;
                }

            }


        }
        void addEdge(int u, int v, int w) {
            adj[u].push_back(make_pair(v, w));
        }
        void shortestPath() {
            for (int i = 0; i < V; i++) {
                for (list<pair<int, int>>::iterator it = adj[i].begin(); it != adj[i].end(); it++) {
                    if (dist[i][it->first] > it->second)
                        dist[i][it->first] = it->second;
                }
            }
            for (int k = 0; k < V; k++) {
                for (int i = 0; i < V; i++) {
                    for (int j = 0; j < V; j++) {
                        if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
                            dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        void printDist() {
            for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) {
                    if (dist[i][j] == INF) cout << 0 << " ";
                    else cout << dist[i][j] << " ";
                }
                cout << "\n";
            }
        }
};

int main() {
    int n, m, u, v, w;
    cin >> n >> m;
    Graph graph(n);
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph.addEdge(u - 1, v - 1, w);
    }
    graph.shortestPath();
    graph.printDist();

    return 0;
}
