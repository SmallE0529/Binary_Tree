#include "binary_tree_force.h"
#include <queue>

using namespace std;

void binary_tree::pre_order(tree_node *current)
{
    if(current != nullptr)
    {
        cout << current->str << " ";
        pre_order(current->left_child);
        pre_order(current->right_child);
    }
}

void binary_tree::in_order(tree_node *current)
{
    if(current != nullptr)
    {
        in_order(current->left_child);
        cout << current->str << " ";
        in_order(current->right_child);
    }
}

void binary_tree::post_order(tree_node *current)
{
    if(current != nullptr)
    {
        post_order(current->left_child);
        post_order(current->right_child);
        cout << current->str << " ";
    }
}

void binary_tree::level_order()
{
    queue<tree_node*> q;
    q.push(this->root);
    
    while(!q.empty())
    {
        tree_node *current = q.front();
        q.pop();
        cout << current->str << " ";
        if(current->left_child != nullptr)
        {
            q.push(current->left_child);
        }
        
        if(current->right_child != nullptr)
        {
            q.push(current->right_child);
        }
    }
}

tree_node* binary_tree::left_most(tree_node *current)
{
    while(current->left_child != nullptr)
    {
        current = current->left_child;
    }

    return current;
}

tree_node* binary_tree::right_most(tree_node *current)
{
    while(current->right_child != nullptr)
    {
        current = current->right_child;
    }
    
    return current;
}

tree_node* binary_tree::in_order_successor(tree_node *current)
{
    if(current->right_child != nullptr)
    {
        return left_most(current->right_child);
    }

    tree_node* successor = current->parent;
    while(successor != nullptr && current == successor->right_child)
    {
        current = successor;
        successor = current->parent;

    }
    return successor;
}

tree_node* binary_tree::in_order_predecessor(tree_node *current)
{
    if(current->left_child != nullptr)
    {
        return right_most(current->left_child);
    }

    tree_node* predecessor = current->parent;
    while(predecessor != nullptr && current == predecessor->left_child)
    {
        current = predecessor;
        predecessor = current->parent;
    }
    return predecessor;

}

void binary_tree::in_order_by_parent(tree_node *root) // sequcnce print tree
{
    tree_node* current = new tree_node;
    current = left_most(root);

    while (current != nullptr)
    {
        cout << current->str << " ";
        current = in_order_successor(current);
    }
}

void binary_tree::in_order_reverse(tree_node *root) // reverse print tree
{
    tree_node* current = new tree_node;
    current = right_most(root);

    while(current != nullptr)
    {
        cout << current->str << " ";
        current = in_order_predecessor(current);
    }
}