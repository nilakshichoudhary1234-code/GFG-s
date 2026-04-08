class Solution {
public:
    // Helper function to find the Lowest Common Ancestor
    Node* findLCA(Node* root, int a, int b) {
        if (!root || root->data == a || root->data == b)
            return root;

        Node* left = findLCA(root->left, a, b);
        Node* right = findLCA(root->right, a, b);

        if (left && right) return root;
        return (left != nullptr) ? left : right;
    }

    // Helper function to find distance from a given ancestor to a target node
    int findLevel(Node* root, int val, int level) {
        if (!root) return -1;
        if (root->data == val) return level;

        int left = findLevel(root->left, val, level + 1);
        if (left != -1) return left;

        return findLevel(root->right, val, level + 1);
    }

    int findDist(Node* root, int a, int b) {
        Node* lca = findLCA(root, a, b);

        // Distance from LCA to node a
        int d1 = findLevel(lca, a, 0);
        // Distance from LCA to node b
        int d2 = findLevel(lca, b, 0);

        return d1 + d2;
    }
};