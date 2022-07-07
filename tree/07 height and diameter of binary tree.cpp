
//height of binary tree


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

int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
    root->right->left->left = new Node (8) ;
    
    
    cout<<height(root);
    
  return 0;
}



//diameter of binary tree



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

int dia(Node* node){
    if(node == NULL)
    {
        return 0;
    }
    
    int lh = dia(node->left);
    int rh = dia(node->right);
    int curr = height(node->left) + height(node->right) +1;
    return max(max(lh,rh), curr);
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
    
    
    cout<<dia(root);
    
  return 0;
}
