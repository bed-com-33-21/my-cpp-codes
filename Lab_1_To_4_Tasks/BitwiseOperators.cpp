#include <iostream>
using namespace std;

main () {
    unsigned int a = 60; //60 =0011 1100
    unsigned int b = 13; //13 = 000 1101
    int c = 0;

    c = a & b; //12 = 0000 1100
    cout << " line 1 - vale of c is: " << c << endl;

    c = a | b; //61 = 0011 1101
    cout << "line 2 - vale of c is: "<< c << endl;

    c = a ^ b; //49 = 0011 0001
    cout << " line 3 - value of c is: "<< c << endl;

    c = ~a; //-61 = 1100 0011
    cout << "line 4 - valu of c is: " << c << endl;

    c = a << 2; //240 = 1111 0000
    cout << "line 5 - value of c is:" << c << endl;

    c = a >> 2; //15 = 0000 1111
    cout << "line 6 - value of c is: " << c << endl;

    return 0;

}