/**
* @file node_cpp 
* @description  dugum sınıfı olusturma
* @course 1/A GRUBU
* @assignment 2.ÖDEV
* @date 8/08/2023
* @author B201210089 YUSUF GÜNCE
  @author G201210017 BERKE ÖZKAN
*/
#include "Node.hpp"

// Node sınıfının yapıcısı (constructor)
Node::Node(int value) {
    data = value;
    left = nullptr;
    right = nullptr;
}

