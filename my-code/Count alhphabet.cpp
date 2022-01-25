#include<iostream>
using namespace std;

int main(){

    string str;
    cin >> str;

    int cnt=0;

    for(int i=0; i<str.size(); i++){
        if((str[i]>='a' and str[i]<='z')or((str[i]>='A' and str[i]<='Z')))
           cnt++;
    }

    cout << cnt;

    return 0;
}

