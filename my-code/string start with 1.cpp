/*

    string start with 1

    10001000110101010001
*/


#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    if(s[0] == '1')
        cout << "Accepted";
    else
        cout << "Not Accepted";

    return 0;
}
