#include <iostream>
#include <string>
using namespace std;

int main() {
  
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt the user for the integer value
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    // Prompt the user for the string value
    cout << "Enter a string: ";
    cin.ignore(); // Ignore the newline character from previous input
    getline(cin, *dynamicString);

    // Output the values
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    // Deallocate the memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
