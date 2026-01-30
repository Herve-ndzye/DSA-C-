//
// Created by HERVE GT IT on 1/30/2026.
//
#include<iostream>
using namespace std;
class AdjacencyMatrix {
    private:
    int n;
    int **adj;
    public:
    AdjacencyMatrix(int n) {
        this->n = n;
        adj = new int*[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new int[n];
            for (int j = 0; j < n; j++) {
                adj[i][j] = 0;
            }
        }
        display();
    }
    void add_edge(int origin,int destin) {
        if (origin > n || destin > n || origin <=0 || destin <=0) {
            cout << "Invalid edge!" << endl;
            return;
        }
        adj[destin-1][origin-1] = 1;
        adj[origin -1][destin-1] = 1;
    }
    void delete_edge(int origin,int destin) {
        if (origin > n || destin > n || origin <=0 || destin <=0) {
            cout << "Invalid edge!" << endl;
            return;
        }
        adj[origin -1][destin-1] = 0;
    }
    void display() {
        int i,j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    int nodes, origin,destin;
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    AdjacencyMatrix am(nodes);
    int max_edges = nodes * nodes;
    for (int i = 0; i < max_edges; i++) {
        cout << "Edges number : "<< i+1<<endl;
        cout << "Enter edge (-1 -1 to exit):"<<endl;
        cout << "Enter Origin and destination vertices :"<<endl;
        cin >> origin >> destin;
        if (origin == -1 || destin == -1) {
            cout << "The final adjacency matrix is : "<< endl;
            am.display();
            break;
        }
        am.add_edge(origin,destin);
        am.display();
    }
    return 0;
}
