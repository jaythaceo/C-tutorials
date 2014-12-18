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
        void level_order (void (*visit_fun)(BinaryTreeNode<Data> *));
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


template <class Data>
void BinaryTree<Data>::spiral_level_order(void(*visit_fun)(BinaryTreeNode<Data> *)) {
    Tracer t("level_order", cout);
    this->visit = visit_fun;
    queue<BinaryTreeNode<Data> *> q;
    level_order_recursion(root, q);
}

template <class Data>
void BinaryTree<Data>::level_order_recursion(BinaryTreeNode<Data> * current_node, queue<BinaryTreeNode<Data> *> &q) {
    visit(current_node);

    if (current_node->left != NULL)
        q.push(current_node->left);
    if (current_node->right != NULL)
        q.push(current_node->right);
    if (!q.empty()) {
        BinaryTreeNode<Data> * temp = q.front();
        q.pop();
        level_order_recursion(temp, q);
    }
}

template <class Data>
void BinaryTree<Data>::in_order_recursion(void(*visit_fun)(BinaryTreeNode<Data> *)) {
    Tracer t("in_order(visit)", cout);
    this->visit = visit_fun;
    in_order_recursion(root);
}

template <class Data>
void BinaryTree<Data>::in_order_recursion(BinaryTreeNode<Data> * current_node) {
    if (current_node->left != NULL)
        pre_order_recursion(current_node->left);

    visit(current_node);

    if (current_node->right != NULL)
        pre_order_recursion(current_node-right);

}


template <class Data>
void BinaryTree<Data>::pre_order(void (*visit_fun)(BinaryTreeNode<Data> * current_node) {
    Tracer r("per_order(visit)", cout);
    this->visit = visit_fun;
    pre_order_recursion(root);

}

template <class Data>
void BinaryTree<Data>::post_order_recursion(BinaryTreeNode<Data> * current_node) {
    if (current_node->left != NULL)
        post_order_recursion(current_node->left);

    if (current_node->right != NULL)
        post_order_recursion(current_node->right);

    visit(current_node);

}

template <class Data>
void BinaryTree<Data>::BinaryTree(int nNodes) {
    Tracer t("BinaryTree(int nNodes", cout);

    class BinaryRand {
        public:
            static bool get() {
                if (rand() % 2)
                    return true;
            }
    };

    t.debug("class BinaryRand defined.");

    /*
     * Algorithm for gernerating nNodes number of random binary tree nodes :
     *  case: zero nodes  -- assign null to root and return.
     *  case : one node   -- generate new BinaryTreeNode with random data, assign the node to root.
     *  case : nNodes nodes- generate one node in as in the case of one node,
     *                      for each new node
     *                          generate a path of lefts|rights until a null pointer is reached,
     *                          generate and assign a new node to the pointer
     */

    if (nNodes == 0)
        root = NULL;
    else {
        root = new BinaryTreeNode<Data>(RandObjGenerator<Data>::geenrate());
        if (nNdoe == 1)
            return;
        else {
            for (<{1:int i}> = 1; <|i|> < <`2`>; <|i|>++) {
                BinaryTreeNode<Data> * current_node = root;
                while(true) {
                    if (BinaryRand::get())
                        if (current_node->left) {
                            current_node = current_node->left;
                            continue;
                        }
                    else {
                        current_node->left = new BinaryTreeNode<Data>(RandObjGenerator<Data>::generate());
                        break;
                    }


                }
            }
        }
    }
}
