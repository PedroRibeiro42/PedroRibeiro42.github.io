// -------------------------------------------------------------
// Algoritmos e Estruturas de Dados 2026/2027 - LEIC (FCUP/FEUP)
// http://www.dcc.fc.up.pt/~pribeiro/aulas/aed2627/
// -------------------------------------------------------------
// Binary Tree
// Last update: 05/11/2026
// -------------------------------------------------------------
// Note: as mentioned in the lectures, the recursive helper methods
// should ideally be private. Here everything is public, so that you
// can add new methods (and their helpers) anywhere in the class.
// -------------------------------------------------------------

#ifndef BTREE_H
#define BTREE_H

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <queue>
#include <stack>

template <class T> class BTree {
private:
  struct Node {
    T value;            // The value stored on the node
    Node *left, *right; // Pointers to left and right child
  };

  // The tree
  Node *root;           // Pointer to the root node

public:
  // Constructor: initially the tree is empty
  BTree() {
    root = nullptr;
  }

  // Copies are forbidden (see slides 38 and 39)
  BTree(const BTree &) = delete;              // no copy constructor
  BTree & operator=(const BTree &) = delete;  // no copy assignment

  // Destructor: delete all nodes (see slide 37)
  ~BTree() {
    destroy(root);
  }

  // Recursively delete left and right subtrees and then current node
  void destroy(Node *n) {
    if (n == nullptr) return;
    destroy(n->left);
    destroy(n->right);
    delete n;
  }

  // ---------------------------------------------------------
  // Count the number of nodes (see slides 12 and 13)
  // ---------------------------------------------------------

  int numberNodes() const {
    return numberNodes(root);
  }

  int numberNodes(Node *n) const {
    if (n == nullptr) return 0;
    return 1 + numberNodes(n->left) + numberNodes(n->right);
  }

  // ---------------------------------------------------------
  // Height of the tree (see slides 15 and 16)
  // ---------------------------------------------------------

  int height() const {
    return height(root);
  }

  int height(Node *n) const {
    if (n == nullptr) return -1;
    return 1 + std::max(height(n->left), height(n->right));
  }

  // ---------------------------------------------------------
  // Does the tree contain value 'val'? (see slides 17 and 18)
  // ---------------------------------------------------------

  bool contains(const T & val) const {
    return contains(root, val);
  }

  bool contains(Node *n, const T & val) const {
    if (n == nullptr) return false;
    if (n->value == val) return true;
    return contains(n->left, val) || contains(n->right, val);
  }

  // ---------------------------------------------------------
  // Print tree in PreOrder (see slide 21)
  // ---------------------------------------------------------

  void printPreOrder() const {
    std::cout << "PreOrder:";
    printPreOrder(root);
    std::cout << std::endl;
  }

  void printPreOrder(Node *n) const {
    if (n == nullptr) return;
    std::cout << " " << n->value;
    printPreOrder(n->left);
    printPreOrder(n->right);
  }

  // ---------------------------------------------------------
  // Print tree in InOrder (see slides 22 and 23)
  // ---------------------------------------------------------

  void printInOrder() const {
    std::cout << "InOrder:";
    printInOrder(root);
    std::cout << std::endl;
  }

  void printInOrder(Node *n) const {
    if (n == nullptr) return;
    printInOrder(n->left);
    std::cout << " " << n->value;
    printInOrder(n->right);
  }

  // ---------------------------------------------------------
  // Print tree in PostOrder (see slides 22 and 23)
  // ---------------------------------------------------------

  void printPostOrder() const {
    std::cout << "PostOrder:";
    printPostOrder(root);
    std::cout << std::endl;
  }

  void printPostOrder(Node *n) const {
    if (n == nullptr) return;
    printPostOrder(n->left);
    printPostOrder(n->right);
    std::cout << " " << n->value;
  }

  // ---------------------------------------------------------
  // Print tree in Breadth-First order using a queue
  // (see slides 25 to 27)
  // ---------------------------------------------------------

  void printBFS() const {
    std::cout << "BFS:";

    std::queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
      Node *cur = q.front();
      q.pop();
      if (cur != nullptr) {
        std::cout << " " << cur->value;
        q.push(cur->left);
        q.push(cur->right);
      }
    }

    std::cout << std::endl;
  }

  // ---------------------------------------------------------
  // Print tree in Depth-First order using a stack
  // (see slides 28 and 29)
  // ---------------------------------------------------------

  void printDFS() const {
    std::cout << "DFS:";

    std::stack<Node *> s;
    s.push(root);
    while (!s.empty()) {
      Node *cur = s.top();
      s.pop();
      if (cur != nullptr) {
        std::cout << " " << cur->value;
        s.push(cur->right);   // right first, so that left is on top
        s.push(cur->left);
      }
    }

    std::cout << std::endl;
  }

  // ---------------------------------------------------------
  // Read a tree in PreOrder from standard input
  // (see slides 31 to 34)
  // ---------------------------------------------------------

  void read(std::string null) {
    root = readNode(null);
  }

  Node *readNode(std::string null) {
    std::string buffer;
    std::cin >> buffer;
    if (buffer == null) return nullptr;
    Node *n = new Node;
    std::istringstream ss(buffer);
    ss >> n->value;
    n->left = readNode(null);
    n->right = readNode(null);
    return n;
  }

  // ---------------------------------------------------------
  // TODO: put the functions you need to implement below this
  // ---------------------------------------------------------



};

#endif
