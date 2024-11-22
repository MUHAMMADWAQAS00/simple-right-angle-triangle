#include <iostream>
using namespace std;

int main() {
    int height;

     //Ask the user for the height of the triangle
    cout << "Enter the height of the right-angle triangle: ";
    cin >> height;

    // Generate the triangle
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

