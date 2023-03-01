#include<bits/stdc++.h>
using namespace std;
void printCount(int n){
    if(n==0){
        return ; // base case rukna kab hai
    }
    cout<<n<<endl;
    printCount(n-1); // recursive call
}

int main()
{
  int n;
 cout<<"Enter the number"<<endl;
  cin>>n;
  cout<<endl;
  printCount(n);
    return 0;
}