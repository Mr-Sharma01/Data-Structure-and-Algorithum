
// count the no of nodes


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

int count(Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        return count(node->left) + count(node->right) + 1;
    }

int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
  
    cout<<count(root);
    
  return 0;
}


//sum of the nodes



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

int sum(Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        return sum(node->left) + sum(node->right) + node->data;
    }

int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
  
    cout<<sum(root);
    
  return 0;
}
