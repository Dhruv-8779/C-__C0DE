#include<bits/stdc++.h>
#include<queue>
using namespace std;
 class Node{
    public:
       int data;
       Node* left;
       Node* right;
       // constructor
       Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
       }
 };
  
   void lebelOrderTraversal(Node* root){
     queue<Node*> q;
     q.push(root);
     q.push(NULL);
     while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){ // purana level complete
            cout<<endl;
            if(!q.empty()){ // queue me value padi hai
                  q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
         }

        if(temp->right){
          q.push(temp->right);
        }
      }
    }
 }

 void Inorder(Node* root){
      // base case
      if(root==NULL){
        return ;
      } 
      // recursive call
      Inorder(root->left);
      cout<<root->data<<" ";
      Inorder(root->right);
 }
  Node* insertIntoBST(Node* root, int d){
    // basecase
     if(root == NULL){
        root = new Node(d);
        return root;
     }

     if(d > root->data){
        // right part me jana hai
        root->right = insertIntoBST(root->right, d);
     }
     else{
        // left part me jana hai
        root->left = insertIntoBST(root->left, d);
     }
     return root;
  }

  Node* minBST(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
  }

  Node* maxBST(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
  }
 void takeInput(Node* &root){
    int data;
    cin>> data;

    while(data != -1){
       root = insertIntoBST(root,data);
        cin >> data;
    }
 }
int main()
{
  Node* root = NULL;
  cout<<" Enter the data to create the BST"<<endl;
  takeInput(root);

  cout<<"printing the BST"<<endl;
  lebelOrderTraversal(root);
  cout<<" Minimum BST "<<minBST(root)->data<<endl;

  cout<<" Maximum BST "<<maxBST(root)->data<<endl;
   cout<<"Printing the inorder"<<endl;
  Inorder(root);
    return 0;
}