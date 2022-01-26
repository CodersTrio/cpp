#include<iostream>
using namespace std;

int main(){

    string s = "104-12";

    int a=0, b=0, c, pos;

    for(int i=0; i< s.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' )
            pos = i;
    }

    ///char 0 == ASCII 48, int 0 == ASCII 0

    for(int i=0; i<pos;i++){
        a=a*10 + (s[i]-48);
    }

    for(int i=pos+1 ;i<s.size();i++){
        b=b*10 + (s[i]-48);
    }

    if(s[pos]=='+') cout << a+b;
    else if(s[pos]=='-') cout << a-b;
    else if(s[pos]=='*') cout << a*b;
    else if(s[pos]=='/') cout << a/b;

    return 0;
}

