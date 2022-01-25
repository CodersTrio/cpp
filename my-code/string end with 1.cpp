/*

    string end with 1

    0001000110101010001
*/


#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    if(s[s.size()-1] == '1')
        cout << "Accepted";
    else
        cout << "Not Accepted";

    return 0;
}

