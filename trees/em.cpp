/*#include <bits/stdc++.h>
#include <queue>
#include <climits>

using namespace std;
#define INF INT_MAX
#define maxv 1000
struct Edge
{
    int to, weight;
};
struct Compare
{
    bool operator()(const Edge &a, const Edge &b)
    {
        return a.weight > b.weight;
    }
};
int V;
int adj[maxv][maxv];
int dist[maxv];
void dijkstra(int src)
{
    fill(dist, dist + V, INF);
    dist[src] = 0;
    priority_queue<Edge, vector<Edge>, Compare> pq;
    pq.push({src, 0});
    while (!pq.empty())
    {
        int u = pq.top().to;
        int weight = pq.top().weight;
        pq.pop();
        if (weight > dist[u])
            continue;
        for (int v = 0; v < V; ++v)
        {
            if (adj[u][v] && dist[v] > dist[u] + adj[u][v])
            {
                dist[v] = dist[u] + adj[u][v];
                pq.push({v, dist[v]});
            }
        }
    }
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << i << "\t " << dist[i] << endl;
    }
}
int main()
{
    V = 5;
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            adj[i][j] = 0;
        }
    }
    adj[0][1] = 4;
    adj[0][2] = 8;
    adj[1][2] = 7;
    adj[1][3] = 9;
    adj[2][4] = 5;
    adj[3][4] = 6;
    int source = 0;
    dijkstra(source);
    return 0;
}*/
#include <bits/stdc++.h>
#include <list>
#include <stack>
class Graph
{
private:
    int V;               // Number of vertices
    std::list<int> *adj; // Adjacency list
    void DFSUtil(int v, bool visited[], std::stack<int> &stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS();
    void topologicalSort();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new std::list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::DFSUtil(int v, bool visited[], std::stack<int> &stack)
{
    visited[v] = true;
    for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
            DFSUtil(*i, visited, stack);
        }
    }
    stack.push(v);
}
void Graph::DFS()
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    std::stack<int> stack;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            DFSUtil(i, visited, stack);
        }
    }
    while (!stack.empty())
    {
        std::cout << stack.top() << "
                                    ";stack.pop();
    }
    delete[] visited;
}
void Graph::topologicalSort()
{
    bool *visited = new bool[V];
    for (int i = 0; i < V;
         i++)
    {
        visited[i] = false;
    }
    std::stack<int> stack;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            DFSUtil(i, visited, stack);
        }
    }
    std::cout << "Topological Sort: ";
    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    delete[] visited;
}
int main()
{
    Graph g(6); // Create a graph with 6 vertices
    // Add edges to the graph to represent a directed acyclic graph (DAG)
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    std::cout << "DFS Traversal: ";
    g.DFS();
    std::cout << "\n";
    g.topologicalSort();
    return 0;
}