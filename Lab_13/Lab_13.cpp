#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>

using namespace std;

class Node {
public:
    std::string name;


    Node() : name("qwe") {
    }


    Node(const string &nodeName) : name(nodeName) {
    }


    Node(const Node &other) : name(other.name) {
    }


    ~Node() {
    }


    void display() const {
        cout << name;
    }
};

class Graph {
private:
    unordered_map<string, Node> nodes;
    unordered_map<string, vector<string> > edges;

public:
    Graph() {
    }


    Graph(const Graph &other) : nodes(other.nodes), edges(other.edges) {
    }

    ~Graph() {
        clear();
    }


    void addNode(const Node &node) {
        nodes[node.name] = node;
        edges[node.name] = {};
    }


    void addEdge(const string &from, const string &to) {
        if (nodes.find(from) != nodes.end() && nodes.find(to) != nodes.end()) {
            edges[from].push_back(to);
        } else {
            cerr << "not exist" << endl;
        }
    }


    void removeNode(const string &nodeName) {
        nodes.erase(nodeName);
        edges.erase(nodeName);


        for (auto &[key, adjacent]: edges) {
            adjacent.erase(
                remove(adjacent.begin(), adjacent.end(), nodeName),
                adjacent.end()
            );
        }
    }


    void clear() {
        nodes.clear();
        edges.clear();
    }


    void traverse() const {
        for (const auto &[nodeName, node]: nodes) {
            cout << nodeName << " -> ";
            if (edges.at(nodeName).empty()) {
                cout << "no con";
            } else {
                for (const auto &adjacent: edges.at(nodeName)) {
                    cout << adjacent << " ";
                }
            }
            cout << endl;
        }
    }
};

int Lab_13() {
    Graph graph;

// www
    Node a("A");
    Node b("B");
    Node c("C");
    graph.addNode(a);
    graph.addNode(b);
    graph.addNode(c);

    // add con
    graph.addEdge("A", "B");
    graph.addEdge("B", "C");
    graph.addEdge("A", "C");

    // cout con
    cout << "after add con:" << std::endl;
    graph.traverse();

    // del con
    graph.removeNode("B");
    cout << "\nafter deleted B:" << std::endl;
    graph.traverse();

    // earase con
    graph.clear();
    cout << "\nafter clear:" << std::endl;
    graph.traverse();

    return 0;
}
