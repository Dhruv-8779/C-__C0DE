#include<bits/stdc++.h>
using namespace std;
 class Animal
 {  
     //pure virtual function
     virtual  void sound()=0; // abstract class me dono function hote hai 
     public:        // abstact class ka obj ni bnaya hai 
     void eat(){
         cout<<"animal is eating:"<<endl;
     }
 };
 class dog : public Animal
 {
  public:
  void sound(){
  cout<<"woof woof...:"<<endl; 
  }
 };
int main()
{
 dog d;
 d.sound();
 d.eat();
    return 0;
}