#include<iostream>
using namespace std;
struct student
{
 int roll;
 char name[20];
  int marks;
};
int main()
{
 struct student s[5];
 cout<<"enter student record:"<< endl<<endl;
 for(int i=0;i<5;i++){
     cout<<"sroll";
     cin>>s[i].roll;
     cout<<"sname";
     cin>>s[i].name;
    cout<<"smarks";
     cin>>s[i].marks;
 }
cout<<"student record:"<< endl<<endl;
 for(int i=0;i<5;i++){
     cout<<"sroll"<<endl<<s[i].roll;
     cout<<"sname"<<endl<<s[i].name;
    cout<<"smarks"<<endl<<s[i].marks;
 }
    return 0;
}