#include <bits/stdc++.h>
using namespace std;
void dc(string &st)
{
    int low = 0;
    int high = st.size() - 1;
    while (low < high)
    {
        swap(st[low++], st[high--]);
    }
}
int main()
{
    //  char name[]="Dhruv soni";
    //  cout<<name<<endl;
    //   int r=strlen(name); // function
    //   cout<<r;

    //   char str[]="Dhruv soni";
    //  cout<<str<<endl;
    //   strrev(str);
    //  cout<<endl<<str; //function0

    //   char str[]="Dhruv";
    //   char str2[]=" Soni";
    //   strcat(str,str2);
    //  cout<<endl<<str; //function

    // char str[]="Dhruv";
    //   char str2[20];
    //   strcpy(str2,str);
    //  cout<<endl<<str2; //function

    //  char str[]="dhruv";
    //   strupr(str);
    //  cout<<endl<<str; //function
    string st = "dharmendra";
    dc(st);
    cout << st;
    //  char str[]="DHRUV";
    //   strlwr(str);
    //  cout<<endl<<str; //function
    return 0;
}
