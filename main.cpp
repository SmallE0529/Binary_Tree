#include <iostream>
#include "binary_tree_force.h"

using namespace std;

int main()
{
    tree_node *node_A = new tree_node("A"); 
    tree_node *node_B = new tree_node("B"); 
    tree_node *node_C = new tree_node("C"); 
    tree_node *node_D = new tree_node("D"); 
    tree_node *node_E = new tree_node("E"); 
    tree_node *node_F = new tree_node("F"); 
    tree_node *node_G = new tree_node("G"); 
    tree_node *node_H = new tree_node("H"); 
    tree_node *node_I = new tree_node("I");

    node_A->left_child = node_B;
    node_A->right_child = node_C;
    node_B->left_child = node_D; 
    node_B->right_child = node_E;
    node_E->left_child = node_G; 
    node_E->right_child = node_H;
    node_C->left_child = node_F; 
    node_F->right_child = node_I;

    binary_tree tree(node_A);

    cout << "Pre-Order:" << endl;
    tree.pre_order(node_A);
    cout << endl;

    cout <<  "In-Order:" << endl;
    tree.in_order(node_A);
    cout << endl;

    cout <<  "Post-Order:" << endl;
    tree.post_order(node_A);
    cout << endl;

    cout <<  "Level-Order:" << endl;
    tree.level_order();
    cout << endl;
    
    return 0;

}