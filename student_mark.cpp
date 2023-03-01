#include<iostream>
using namespace std;
struct student
{ 
  int roll;
  char name[20];
  int marks[5];
};
int main()
{
    int total; float avg;
 struct student s;
  cout<<"sroll";
  cin>>s.roll;
  cout<<"sname";
  cin>>s.name;
  cout<<"enter 5 subject marks:";
 for(int i=0;i<5; i++){
     int a;
    cin>>a;
    s.marks[i]=a;
   total=total+s.marks[i];}
   avg=(float)total/5;
 cout<<"persentage"<<avg;
  
    return 0;
}