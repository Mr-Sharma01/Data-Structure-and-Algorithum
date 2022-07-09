

//Right View of Binary Tree

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

void lview(Node* root){
     if (root==NULL){
         return;
     }
     
     queue<Node*> q;
     q.push(root);
     
     while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* curr = q.front();
            q.pop();
            
            if (i==n-1)
            {
                cout<<curr->data<<"\n";
            }
            
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
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
  
    lview(root);
    
  return 0;
}





//Left View of Binary Tree


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

void rview(Node* root){
     if (root==NULL){
         return;
     }
     
     queue<Node*> q;
     q.push(root);
     
     while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
            Node* curr = q.front();
            q.pop();
            
            if (i==0)
            {
                cout<<curr->data<<" ";
            }
            
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
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
  
    rview(root);
    
  return 0;
}
