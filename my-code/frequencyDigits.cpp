#include<iostream>
#include<map>

using namespace std ;

int main(){


    string s;

    getline(cin,s);

    map<char,int> mp;
    map<char,int> :: iterator it;

    for(int i=0;i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            mp[s[i]]++;
        }
    }

    /// output

    for(it=mp.begin(); it != mp.end() ; it++){
        cout<< it->first << " frequency is : "<< it->second <<endl;
    }

}
