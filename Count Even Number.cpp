#include<iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int cnt=0;

//   while loop

//    while(a<=b)
//    {
//        if(a%2==0)
//        {
//            cnt++;
//        }
//
//        a++;
//    }

// do while

    do
    {
        if(a%2==0)
        {
            cnt ++;
        }
        a++;
    }
    while(a<=b);

        cout << cnt;



    return 0;
}
