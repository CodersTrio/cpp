#include<iostream>
using namespace std;

int main()
{



    string s="10-2-5";

    int a=0, b=0, c=0, pos1=-1, pos2=-1;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/')
        {
            if(pos1 == -1)
                pos1 = i;
            else
                pos2 = i;
        }
    }

    for(int i=0; i<pos1; i++)
    {
        a = a*10 + (s[i]-'0');
    }

    for(int i=pos1+1; i<pos2; i++)
    {
        b = b*10 + (s[i]-'0');
    }

    for(int i=pos2+1; i<s.size(); i++)
    {
        c = c*10 + (s[i]-'0');
    }


    int res=0;

    char op1 = s[pos1], op2=s[pos2];

    if(op2 =='*' or op2=='/')
    {
        if(op2=='*')
        {
            res = b*c;
            if(op1=='+')
                    res = a + res;
                else if(op1=='-')
                    res = a - res;
                else if(op1=='*')
                    res = a * res;
                else if(op1=='/')
                    res = a / res;
        }

        else if(op2=='/')
        {
            if(op1=='*')
            {
                res = (a*b)/c;
            }
            else if(op1=='/')
            {
                res = (a/b)/c;
            }

            else
            {
                res = b/c;
                if(op1=='+')
                    res = a + res;
                else if(op1=='-')
                    res = a - res;
                else if(op1=='*')
                    res = a * res;
                else if(op1=='/')
                    res = a / res;
            }

        }



    }
    else if(op1 =='*' or op1=='/')
    {
        if(op1=='*')
        {
            res = a*b;
        }

        else if(op1=='/')
        {
            res = a/b;
        }
        if(op2=='+')
            res = res + c;
        else if(op2=='-')
            res = res - c;
        else if(op2=='*')
            res = res * c;
        else if(op2=='/')
            res = res / c;

    }

    else{
        if(op1=='+')    /// 10+2+5
        {
            res = a+b;
        }
        else
        {
            res = a-b ;
        }

        if(op2=='+')
            res+=c;
        else
            res-=c;
    }



    cout << res;

    return 0;
}
