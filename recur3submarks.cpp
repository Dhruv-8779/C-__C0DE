#include<bits/stdc++.h>
using namespace std;
int  marks(int math, int sanskrit,int english){
return((math+sanskrit+english)/3);
}
int main()
{
  int math=50;
  int sanskrit=80;
  int english=70;
  cout<<"total marks"<<endl<<marks(math,sanskrit,english);
   return 0;
}