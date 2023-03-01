#include<bits/stdc++.h>
using namespace std;
int countodd(int a[], int n){
    int count=0;
for(int i=0; i<n; i++){
    if(a[i]%2==!0){
        count++;
    }
}
return count++;
}
int main()
{
int a[]={1,2,3,4,5,6,7,8,9};
cout<<countodd(a,9);
    return 0;
}