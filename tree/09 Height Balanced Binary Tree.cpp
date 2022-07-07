
//Height Balanced Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int height(Node* node){
    if(node == NULL)
    {
        return 0;
    }
    
    return max(height(node->left) , height(node->right)) +1;
}

bool balance(Node* node)
{
    if(node == NULL)
    {
        return true;
    }
    if (balance(node->left) == false)
    {
        return false;
    }
    if (balance(node->right) == false)
    {
        return false;
    }
    int d = height(node->left)-height(node->right);
    if (abs(d)<=1)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
    root->right->left->left = new Node (8) ;
    
    
    if(balance(root))
    {
        cout<< "balanced ";
    }
    else {
        cout<<" unbalanced";
    }
    
  return 0;
}
