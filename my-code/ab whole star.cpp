/*
valid:
        empty
        ab
        abab
        ababab

    Invalid:
        b
        a
        ba
        ababba
*/


#include<iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;

    if(s.size()%2!=0)
    {
        cout <<"Not Accepted";
        return 0;
    }

    bool flag=true;

    for(int i=0; i<s.size(); i++)
    {
        if(i%2!=0 and s[i]=='a')
        {
            flag=false;
            break;
        }
        if(i%2==0 and s[i]=='b')
        {
            flag=false;
            break;
        }
    }

    if(flag)
        cout <<"Accepted";
    else
        cout <<"Not Accepted";


    return 0;
}
