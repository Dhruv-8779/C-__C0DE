#include<bits/stdc++.h>
using namespace std;
 class person
 { 
     private: // by default public hi rhega optional
    int run;    // data member 
    string msg;
    public:    // public likhna compulsari hai ni obj se call ni hoga 
    void play(){
    run=50;
    cout<<"Today i scored"<<" "<<run<<" "<<"runs:"<<endl;
    }
    void walk(){
        msg="Today i walked 2 kilometers:";
        cout<<msg<<endl;
    }
 };
int main()
{
 person obj;
 obj.play();
 obj.walk();
    return 0;
}