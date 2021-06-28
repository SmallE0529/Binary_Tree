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