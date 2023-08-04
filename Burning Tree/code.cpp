class Solution {
public:
    void findParent(Node* root, map<Node*, Node*>& parent, Node*& target_node, int target) {
        if (root == NULL)
            return;

        if (root->data == target)
            target_node = root;

        if (root->left) {
            parent[root->left] = root;
            findParent(root->left, parent, target_node, target);
        }

        if (root->right) {
            parent[root->right] = root;
            findParent(root->right, parent, target_node, target);
        }
    }

    int minTime(Node* root, int target) {
        map<Node*, Node*> parent;
        Node* target_node = NULL;
        parent[root] = NULL;
        findParent(root, parent, target_node, target);

        queue<pair<Node*, int>> q;
        map<int, int> visited;

        q.push({target_node, 0});
        visited[target_node->data] = 0;
        int min_time = 0;
        while (!q.empty()) {
            auto it = q.front();
            Node* node = it.first;
            int time = it.second;
            min_time = max(min_time, time);
            q.pop();
            if (parent[node] && visited.find(parent[node]->data) == visited.end()) {
                visited[parent[node]->data] = time + 1;
                q.push({parent[node], time + 1});
            }

            if (node->left && visited.find(node->left->data) == visited.end()) {
                visited[node->left->data] = time + 1;
                q.push({node->left, time + 1});
            }
            if (node->right && visited.find(node->right->data) == visited.end()) {
                visited[node->right->data] = time + 1;
                q.push({node->right, time + 1});
            }
        }
        return min_time;
    }
};
