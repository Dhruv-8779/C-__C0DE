#include<bits/stdc++.h>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;
    //constructer
    Node(int data){
    this -> data = data;
    this -> next = NULL;
    }
 };
 void inserthead(Node* &head, int data){
       //new node create
       Node* temp = new Node(data);
       temp -> next = head;
       head = temp;
 }
 void insertTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail =  temp;
 }
 void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
 }
 void insertposition(Node* &head, int position,int data){
    if(position == 1){
     inserthead(head,data);
     return ;
    }
    Node* temp = head;
    int count=1;
    while(count<position-1){
        temp = temp -> next;
        count++;
    }
    //crete node for data 
    Node* nodeToinsert = new Node(data);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;
 }
int main()
{
    // create new node
 Node* node1=new Node(5);
//  cout<< node1 -> data << endl;
//  cout<< node1 -> next <<endl;
 //head printed to node1
  Node* head = node1;
  Node* tail = node1;
   print(head);

  insertTail(tail,10);
  print(head);

  insertTail(tail,20);
  print(head);

  insertTail(tail,30);
  print(head);

  insertposition(head,4,25);
  print(head);

  insertposition(head,1,2);
  print(head);
    return 0;
}