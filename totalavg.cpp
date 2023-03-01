#include <iostream>
using namespace std;
int main()
{
    int hindi, total;
    int english;
    int math;
    int physics;
    int chemistry;
    double avg;
    cout << "enter marks 5 subject";
    cin >> hindi >> english >> math >> physics >> chemistry;
    total = hindi + english + math + physics + chemistry;
    cout <<"total marks"<< total<<endl;
    avg = total / 5;
    cout <<"average marks"<< avg<<endl;
    return 0;
}