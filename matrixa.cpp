#include<iostream>
using namespace std;
int main()
{
 int mat[2][2];
 cout<<"enter matrix element";
 for(int i=0; i<2; i++){
     for(int j=0; j<2; j++){
         cin>>mat[i][j];
     }

 }
  cout<<" matrix element"<<endl;
 for(int i=0; i<2; i++){
     for(int j=0; j<2; j++){
          cout<< endl <<mat[i][j];
     
     }
    
 }
 cout<<endl;
  
    return 0;
}