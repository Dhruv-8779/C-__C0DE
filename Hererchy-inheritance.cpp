#include<bits/stdc++.h>
using namespace std;
 class Animal 
 {
     protected:
    public:
    void eat(){
     cout<<"Animal eating:";
    }
 };
 class Cat : public Animal
 {
     public:
    void voice(){
        cout<<"meow meow:";
    }
 };
 class Dog : public Animal
 {
     public:
    void bark(){
      cout<<"bhow bhow:";
  }
 };
int main()
{
 Cat c;
 Dog d;
 c.eat();
 c.voice();
 Dog d;
 d.eat();
 d.bark();
    return 0;
}