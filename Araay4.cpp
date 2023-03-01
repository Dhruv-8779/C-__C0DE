#include<iostream>
using namespace std;
int main()
{
   int a[5][5]={
       {1,2,3,4,5},
      {4,2,3,4,5},
      {5,2,9,9,5},
      {10,2,3,6,5}
   };
   int sum=0;
   cout<<"total row";
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
         sum += a[i][j];
        }
        cout<<endl<<sum;
        
    }
    return 0;
}