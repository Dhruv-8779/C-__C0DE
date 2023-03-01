#include<iostream>
using namespace std;
int main()
{
 int mat[2][2];
 int trans;
 cout<<"Enter matrix Element";
 for(int i=0; i<2; i++){

     for(int j=0; j<2; j++){
      cin>>mat[i][j];
     }
 }
 cout<<"matrix Element";
 for(int i=0; i<2; i++){

     for(int j=0; j<2; j++){
      cout<<mat[i][j];
     }
     cout<<endl;
 }

for(int i=0; i<2; i++){

     for(int j=0; j<2; j++){
    trans[i][j]=mat[i][j];
     }
 }
 cout<<"tanspose Element"<<endl;
 for(int i=0; i<2; i++){

     for(int j=0; j<2; j++){
      cout<<trans[i][j];
     }
     cout<<endl;
 }

    return 0;
}