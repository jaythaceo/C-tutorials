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
class BinaryTree{
    class BinaryTreeNode<Data> * root;
    void (*visit)(BinaryTreeNode<Data> *);
    public:
        BinaryTree(int nNodes);
        void pre_order(void (*visit_fun)(BinaryTreeNode<Data> *));
        void pre_order_recursion(BinaryTreeNode<Data> * current_node);
        void in_order(void (*visit_fun)(BinaryTreeNode<Data> *));
        void in_order_recursion(BinaryTreeNode<Data> * current_node);
        void post_order(void (*visit_fun)(BinaryTreeNode<Data> *));
        void post_order_recursion(BinaryTreeNode<Data> * current_node);
        void level_order (*visit_fun)(BinaryTreeNode<Data> *));
        void level_order_recursion(BinaryTreeNode<Data> * current_node, queue<BinaryTreeNode<Data> *> &q);
        void spiral_level_order(void (*visit_fun)(BinaryTreeNode<Data> *));

};


template <class Data>
void BinaryTree<Data>::level_order(void(*visit_fun)(BinaryTreeNode<Data> *)) {
    Tracer t("level_order", cout);
    this->visit = visit_fun;
    queue<BinaryTreeNode<Data> *> q;
    level_order_recursion(root, q);
}


