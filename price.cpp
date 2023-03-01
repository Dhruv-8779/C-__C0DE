#include<bits/stdc++.h>
using namespace std;
int main()
{
    float price[3]={20,30,40};
    cout<<"price";
    cin>>price[0]>>price[1]>>price[2];
    cout<<"total price"<<endl;
    cout<<"first price"<<endl <<price[0]+(0.18*price[0]);
    cout<<"2nd price"<<endl <<price[0]+(0.18*price[1]);
    cout<<"3rd price"<<endl <<price[0]+(0.18*price[2]);
    return 0;
}