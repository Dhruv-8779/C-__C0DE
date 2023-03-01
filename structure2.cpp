#include <bits/stdc++.h>
using namespace std;
struct studnetaddress
{
    string street;
    string colony;
    string district;
    string state;
    string country;
    double DOB;
};
int main()
{
    struct studnetaddress stu; // main function me struct likhna optional hai
    stu.street = "Burhar";
    stu.colony = "Rojgar karyalay:";
    stu.district = "shahdol";
    stu.state = "MP";
    stu.country = "INDIA";
    stu.DOB = 2001;
    cout << "my street namer is:" << endl
         << stu.street << endl;
    cout << "my colony namer is:" << endl
         << stu.colony << endl;
    cout << "my district namer is:" << endl
         << stu.district << endl;
    cout << "my state namer is:" << endl
         << stu.state << endl;
    cout << "my date of birth is:" << endl
         << stu.DOB << endl;
    return 0;
}