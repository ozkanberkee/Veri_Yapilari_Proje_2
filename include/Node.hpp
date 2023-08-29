/**
* @file node_hpp 
* @description  dugum sınıfı olusturma
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#ifndef NODE_HPP
#define NODE_HPP

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value); // Yapıcıyı int türünden bir argümanla tanımlayın.
};
#endif