#include <iostrem>
#include <cstring>

using namespace std;

int main () {
    char stri1 [10] = "Hello";
    char stri2 [10] = "world";
    char stri3 [10] ;
    int len ;

    // copy str1 into stri3
    strcpy (stri3, stri1);
    cout << "strcpy (stri3, stri1) : " << stri3 << endl;

    // concatrnates stri1 and stri 2
    strcat (stri1, str2);
    cout << "strcat (stri1, str2): " << stri1 << endl;

    // total length of str1 after concatenation
    len = strlen (str1);
    cout << "strlen (str1) : " << len << endl;

    return 0;
}