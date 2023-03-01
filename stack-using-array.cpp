#include<bits/stdc++.h>
using namespace std;
 class Stack{
      public:
      int *arr;
      int top;
      int size;
    Stack(int size){ //contructor
    this ->size=size; //initialize
    arr = new int[size];
    top=-1;
    }
    void push(int element){
     if(size-top>1){
        top++;
        arr[top]=element;
     }
     else{
        cout<<"stack is overflow"<<endl;
     }
    }
    void pop(){
    if(top>=0){
        top--;
    }
    else{
      cout<<"stack is underflow"<<endl;  
    }
    }
    int peek(){    //peek means top
    if(top>=0){
        return arr[top];
    }
    else{
     cout<<"stack is empty"<<endl; 
     return -1;        
     }
    }
    bool isempty(){
         if(top==-1){
      return true;    
         }
         else{
            return false;
         }
    }
 };
int main()
{
 Stack st(5);  //5 is size
 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);
 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;
 st.pop();
 cout<<st.peek()<<endl;
 cout<<st.isempty()<<endl;
 
    return 0;
}