#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    bool flag = true;

    for(int i=0; i<s.size(); i++){
        if(s[i]!= 'a'){
            flag = false;
            break;
        }
    }

    if(flag)
        cout <<"Accepted";
    else
        cout <<"Not Accepted";

    return 0;
}
