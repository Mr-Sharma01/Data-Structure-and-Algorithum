

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

void sum(Node* root, int n)
    {
     if (root==NULL){
         return;
     }
     
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
     int k = 0;
     int sum;
     
     while(!q.empty()){
        Node* node = q.front();
        q.pop();
        
        
        if(node != NULL)
        {
            sum = sum + node->data;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        
        else if(!q.empty())
            q.push(NULL);     
        
        

        if(node == NULL)
        {
            if(k==n)
                {   
                cout<<sum<<" ";
                }
           k++;
           sum =0;
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
  
    int n = 2;
    sum(root,n);
    
  return 0;
}




//Or you can check this also



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

void sum(Node* root, int n)
    {
     if (root==NULL){
         return;
     }
     
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
     int k = 0;
     int sum = 0;
     
     while(!q.empty()){
        Node* node = q.front();
        q.pop();
        
        
        if(node != NULL)
        {
            if(k==n)
            { sum = sum + node->data;} 
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        
        else if(!q.empty())
          {  q.push(NULL);
            k++;
          }
        }
        cout<<sum;
    }


int main(){
    Node* root = new Node (1) ;
    root->left = new Node (2) ;
    root->right = new Node (3) ;
  
    root->left->left = new Node (4) ;
    root->left->right = new Node (5) ;
    root->right->left = new Node (6) ;
    root->right->right = new Node (7) ;
  
    int n = 2;
    sum(root,n);
    
  return 0;
}
