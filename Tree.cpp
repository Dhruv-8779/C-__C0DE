#include<bits/stdc++.h>
#include<queue>
using namespace std;
 class node {
     public:
    int data;
    node* left;
    node* right;
    node(int d){ // constructor 
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
 };
 node* buildTree(node* root){ // recursion function     
 cout<<"Enter the data"<<endl;
   int data;
   cin>>data;
   root = new node(data);
   if(data == -1){
    return NULL;
   }
 cout<<"enter the data inserting the left side "<<data<<endl;
  root->left=  buildTree(root->left); //recursive call
  cout<<"enter the data inserting the right side 1"<<data<<endl;
  root->right = buildTree(root->right);
  return root;
 }

 void lebelOrderTraversal(node* root){
     queue<node*> q;
     q.push(root);
     q.push(NULL);
     while(!q.empty()){
        node* temp = q.front();
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
 void Inorder(node* root){
      // base case
      if(root==NULL){
        return ;
      } 
      // recursive call
      Inorder(root->left);
      cout<<root->data<<" ";
      Inorder(root->right);
 }

 void Preorder(node* root){
      // base case
      if(root==NULL){
        return ;
      } 
      // recursive call
      cout<<root->data<<" ";
      Preorder(root->left);
      Preorder(root->right);
 }

 void Postorder(node* root){
      // base case
      if(root==NULL){
        return ;
      } 
      // recursive call
      Postorder(root->left);
      Postorder(root->right);
      cout<<root->data<<" ";
 }
int main()
{
   node* root = NULL;
   root= buildTree(root);
   // lebelOrderTraversal
   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"printing the lebelOrderTraversal output"<<endl;
    lebelOrderTraversal(root);
    cout<<"printing the inorder traversal:  ";
    Inorder(root);

    cout<<"printing the preorder traversal:  ";
    Preorder(root);

    cout<<"printing the postorder traversal:  ";
    Postorder(root);
    return 0;
}
