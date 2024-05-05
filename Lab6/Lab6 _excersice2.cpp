#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    // Get dimensions from the user
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;

    if (rows > 3) {
        cout << "Invalid input. Maximum number of rows is 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> columns;

    if (columns > 3) {
        cout << "Invalid input. Maximum number of columns is 3." << endl;
        return 1;
    }

    // Dynamically allocate a 2-dimensional array
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[columns];
    }

    // Assign values to each element of the array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}