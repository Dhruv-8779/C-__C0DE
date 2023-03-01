#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{   
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
     }
    }
}

int main()
{
 int even[8]={10,3,4,79,78,65,57,5};
 bubbleSort(even,8);
    return 0;
}