#include<iostream>
using namespace std;

int main()
{

    string checkedString = "baba";

    string st;
    cin >> st;

    if (st.find(checkedString) != string::npos)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Not Accepted";

    }
    return 0;
}
