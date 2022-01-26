#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string p="baba";

    int j=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]==p[j]){
            j++;
            if(j==p.size())
                break;
        }
        else
            j=0;
    }

   if(j==p.size())
        cout<<"Found\n";
   else
        cout<<"Not found\n";

    return 0;
}
