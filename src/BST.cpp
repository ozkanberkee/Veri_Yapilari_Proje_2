/**
* @file BST_CPP 
* @description Binary search tree
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "BST.hpp"
#include "Node.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include "Yigin.hpp"
void BST::insertRecursive(Node*& node, int value) {
    if (node == nullptr) {
        node = new Node(value);
    } else if (value < node->data) {
        insertRecursive(node->left, value);
    } else if (value > node->data) {
        insertRecursive(node->right, value);
    } else {
        // value is already in the tree, handle this case if necessary
    }
}
void BST::printPostorderRecursive(Node* node) {
    if (node != nullptr) {
        printPostorderRecursive(node->left);
        printPostorderRecursive(node->right);
        std::cout << char(node->data) << " "; // ASCII tablosundaki karşılığını yazdır
    }
}
void BST::printPostorder() {
    printPostorderRecursive(root);
    std::cout << std::endl;
}
void BST::insert(int value) {
    insertRecursive(root, value);
}
int BST::heightRecursive(Node* node) {
    if (node == nullptr) {
        return -1; // Boş düğümlerin yüksekliği -1 olarak kabul ediyoruz
    }
    int leftHeight = heightRecursive(node->left);
    int rightHeight = heightRecursive(node->right);
    return std::max(leftHeight, rightHeight) + 1;
}

int BST::height() {
    return heightRecursive(root);
}