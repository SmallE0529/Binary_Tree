#ifndef __BINARY_TREE_FORCE_H_
#define __BINARY_TREE_FORCE_H_

#include <iostream>
#include <string>

using namespace std;

class binary_tree;

class tree_node
{
    public:
    tree_node *left_child = nullptr;
    tree_node *right_child = nullptr;
    tree_node *parent = nullptr;
    string str = "";

    tree_node()
    {
        left_child = nullptr;
        right_child = nullptr;
        parent = nullptr;
        str = "";
    };

    tree_node(string _str)
    {
        left_child = nullptr;
        right_child = nullptr;
        parent = nullptr;
        str = _str;
    };

    friend class binary_tree;
};

class binary_tree
{
    public:
    tree_node *root = nullptr;

    binary_tree()
    {
        root = nullptr;
    };

    binary_tree(tree_node *_root)
    {
        root = _root;
    };

    void pre_order(tree_node *current);
    void in_order(tree_node *current);
    void post_order(tree_node *current);
    void level_order();
};

#endif