#include <iostream>
using namespace std;

int main() {

    string st1 = "abcdefghijKLMNOPQRSTuvwxyz0123456789!@#$%^&*(){}[]=-", v = "", c = "", u = "", l = "", d = "", s = "";

    for(int i=0; i<st1.size(); i++){
       if(st1[i] == 'a' || st1[i] == 'e' || st1[i] == 'i' || st1[i] == 'o' || st1[i] == 'u' || st1[i] == 'A' || st1[i] == 'E' || st1[i] == 'I' || st1[i] == 'O' || st1[i] == 'U')
        v+= st1[i];
       else if((st1[i] >= 'a' && st1[i] <= 'z') || (st1[i] >= 'A' && st1[i] <= 'Z'))
        c+=st1[i];

        if(st1[i] >= 'A' && st1[i] <= 'Z')
        u+=st1[i];
        else if(st1[i] >= 'a' && st1[i] <= 'z')
        l+=st1[i];

        if(st1[i] >= '0' && st1[i] <= '9')
        d+=st1[i];

        if((st1[i] >= 32 && st1[i] <= 47) || (st1[i] >= 58 && st1[i] <= 64) || (st1[i] >= 91 && st1[i] <= 96) || (st1[i] >= 123 && st1[i] <= 126))
        s+=st1[i];




    }

    cout<<"Vowel: "<<v<<endl;
    cout<<"Consonant: "<<c<<endl;
    cout<<"Uppercase: "<<u<<endl;
    cout<<"Lowercase: "<<l<<endl;
    cout<<"Digit: "<<d<<endl;
    cout<<"Special characters: "<<s<<endl;




    return 0;
}

