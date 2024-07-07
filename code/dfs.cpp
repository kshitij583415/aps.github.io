#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <string>

class Graph {
private:
    std::unordered_map<std::string, std::vector<std::string>> adjList;

public:
    void addFriendship(const std::string& user1, const std::string& user2) {
        adjList[user1].push_back(user2);
        adjList[user2].push_back(user1);
    }

    void DFS(const std::string& startUser) {
        std::unordered_map<std::string, bool> visited;
        std::stack<std::string> stack;

        stack.push(startUser);

        while (!stack.empty()) {
            std::string currentUser = stack.top();
            stack.pop();

            if (!visited[currentUser]) {
                std::cout << currentUser << " ";
                visited[currentUser] = true;

                for (const auto& friendUser : adjList[currentUser]) {
                    if (!visited[friendUser]) {
                        stack.push(friendUser);
                    }
                }
            }
        }
    }
};

int main() {
    Graph userGraph;

    // Adding friend connections
    userGraph.addFriendship("Alice", "Bob");
    userGraph.addFriendship("Alice", "Charlie");
    userGraph.addFriendship("Bob", "David");
    userGraph.addFriendship("Charlie", "Eve");

    // Perform DFS from Alice
    std::cout << "DFS starting from Alice: ";
    userGraph.DFS("Alice");

    return 0;
}
