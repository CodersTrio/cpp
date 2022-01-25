#include<iostream>
#include<map>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    map <char, int> freq;
    map <char, int> ::iterator it;


    for(int i=0; i<s.size();i++){
        freq[s[i]]++;
    }

    for(it=freq.begin(); it!=freq.end(); it++){
        cout << it->first << " - " << it->second<< endl;
    }

    return 0;
}

