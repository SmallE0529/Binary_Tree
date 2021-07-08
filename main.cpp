#include <iostream>
#include "binary_tree_force.h"

using namespace std;

#define TEST_CASE_1 0
#define TEST_CASE_2 1

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

    node_B->parent = node_A;
    node_C->parent = node_A;
    node_D->parent = node_B;
    node_E->parent = node_B;
    node_F->parent = node_C;
    node_G->parent = node_E;
    node_H->parent = node_E;
    node_I->parent = node_F;


    binary_tree tree(node_A);

#if TEST_CASE_1
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

#endif

#if TEST_CASE_2

    cout <<  "In-Order by parent:" << endl;
    tree.in_order_by_parent(node_A);
    cout << endl;

    cout <<  "In-Order reverse:" << endl;
    tree.in_order_reverse(node_A);
    cout << endl;

#endif

    return 0;

}