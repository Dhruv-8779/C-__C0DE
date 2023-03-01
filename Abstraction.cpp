#include <bits/stdc++.h>
using namespace std;
class myBank
{
private:
    int atmpin, balance; // 50% abstraction ks use data ko hide and private k liye
                         //  kia jata hai
public:
    string bankname, ifsc;
    int accountno;
    void input()
    {
        bankname = "canara Bank:";
        ifsc = "CNBR0004:";
        accountno = 1256323948;
        atmpin = 2001;
        balance = 5000;
    }
    void output()
    {
        cout << "my Bank detail:" << endl;
        cout << "my bank name is:"
             << " " << bankname << endl;
        cout << "my ifsc code is:"
             << " " << ifsc << endl;
        cout << "my accountnumber is:"
             << " " << accountno << endl;
        cout << "my atm pin is:"
             << " " << atmpin << endl;
        cout << "my balance is:"
             << " " << balance << endl;
    }
};
int main()
{
    myBank obj;
    obj.input();
    obj.output();

    cout << "DC tring to access my account:" << endl;
    cout << obj.bankname << endl;
    cout << obj.ifsc << endl;
    cout << obj.accountno << endl;
    // cout<<obj.atmpin<<endl;
    // cout<<obj.balance<<endl;
    return 0;
}