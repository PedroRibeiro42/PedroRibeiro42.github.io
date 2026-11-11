// -------------------------------------------------------------
// Algoritmos e Estruturas de Dados 2026/2027 - LEIC (FCUP/FEUP)
// http://www.dcc.fc.up.pt/~pribeiro/aulas/aed2627/
// -------------------------------------------------------------
// Example of how to use the BTree<T> class
// Last update: 05/11/2026
// -------------------------------------------------------------

#include "binaryTree.h"

int main() {

  BTree<int> t; // Create an empty tree of integers
  t.read("N");  // Read contents from stdin, using "N" as nullptr

  // Call some of the methods the class provides
  std::cout << "numberNodes = " << t.numberNodes() << std::endl;  
  std::cout << "height = "      << t.height() << std::endl;
  std::cout << "contains(2) = " << t.contains(2) << std::endl;
  std::cout << "contains(3) = " << t.contains(3) << std::endl;

  // Print nodes in several possible orders
  t.printPreOrder();
  t.printInOrder();
  t.printPostOrder();
  t.printBFS();
  t.printDFS();
  
  return 0;
}
