
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

struct Node* lca(Node* node, int n1, int n2)
{
    if(node==NULL)return NULL;
    if(node->data==n1 || node->data==n2)return node;
    
    Node* left = lca(node->left,n1,n2);
    Node* right = lca(node->right,n1,n2);
    
    if(left==NULL)return right;
    if(right==NULL)return left;
    
    return node;
}

int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
  
    cout<<lca(root,4,7)->data;
    
  return 0;
}
