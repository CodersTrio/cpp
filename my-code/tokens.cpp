#include<iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{

    string st = "sum = num1 + num2 + num3 - num4 * num5";
    string newSt="";

    for(int i=0; i<st.size(); i++)
    {
        if(st[i]!=' ')
            newSt+=st[i];
    }
    newSt+='*';

    map<string, string> mp;
    vector<string> v;

    string subSt="", opSt="";
    char cntSt='1', cntOp='1';

    for(int i=0; i<newSt.size(); i++)
    {
        if(newSt[i]=='+' or newSt[i]=='-' or newSt[i]=='*' or newSt[i]=='/' or newSt[i]=='=')
        {
            if(mp.find(subSt)== mp.end())
            {
                if(mp[subSt]=="")
                {
                    mp[subSt]="id";
                    mp[subSt]+=cntSt;
                    cntSt++;
                }
                v.push_back(subSt);
            }

            opSt += newSt[i];
            if(mp[opSt]=="")
            {
                mp[opSt]="op";
                mp[opSt]+=cntOp;
                cntOp++;
            }
            if(i!=newSt.size()-1)
                v.push_back(opSt);

            subSt="";
            opSt="";
        }
        else
        {
            subSt+=newSt[i];
        }
    }

    for(int i=0; i< v.size(); i++)
        cout <<mp[v[i]]<<" ";

    return 0;
}

