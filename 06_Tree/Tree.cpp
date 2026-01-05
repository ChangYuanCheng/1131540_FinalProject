#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Insert a new node into BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        Node* node = new Node{key, nullptr, nullptr};
        return node;
    }
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

// Inorder traversal (Left-Root-Right)
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search for a key in BST
bool search(Node* root, int key) {
    if (root == nullptr) return false;
    if (key == root->data) return true;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    int key = 40;
    cout << key << (search(root, key) ? " found\n" : " not found\n");

    return 0;
}
