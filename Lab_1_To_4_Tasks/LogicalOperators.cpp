#include <iostream>
using namespace std;

main () {
    int a = 5;
    int b = 20;
    int c ;
    if (a && b){
        cout << "line 1 - condition is true" << endl;
    } 
    if (a || b) {
        cout << " line 2 - condition is true" << endl;
    }
    /*let's change the values of a and b*/
    a = 0;
    b = 10;
    
    if (a && b) {
        cout << "line 3 - condition is true"<< endl;
    } else {
        cout << " line 4 - condition is not true"<< endl;
    }
    if (! (a && b)) {
        cout << "line 5 - condition is true"<< endl;
    }
    return 0;
}