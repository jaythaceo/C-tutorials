#ifndef BINARY_TREE
#define BINARY_TREE

#include <cstdlib>
#include <queue>
#include "tracer.h"
#include "random_object_generator.h"

template <class Data>
class BinaryTreeNode {
public:
    Data * data;
    BinaryTreeNode<Data> * left;
    BinaryTreeNode<Data> * right;

    BinaryTreeNode(Data * data_passed = NULL) {
        data = data_passed;
        if(typeid(int) == typeid(Data)) {
            (*data) %= 10;
        }
        left = right = NULL;

    }

};

template <class Data>
void BinaryTree<Data>::level_order(void(*visit_fun)(BinaryTreeNode<Data> *)) {

}
