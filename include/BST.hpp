/**
* @file BST_hpp
* @description Binary search tree
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#ifndef BST_HPP
#define BST_HPP

#include "Node.hpp"
#include <string>
#include "Yigin.hpp"
class BST {

public:
  Node* root;
    BST() : root(nullptr) {}
    void insert(int value);

    void printPostorderRecursive(Node* node);
    void printPostorder();
    void insertRecursive(Node*& node, int value);
    int heightRecursive(Node* node); // Yüksekliği hesaplayan özyinelemeli fonksiyon
    int height(); // Ağacın yüksekliğini hesaplayan fonksiyon
    
};
#endif