#include <iostream>
#include <algorithm>

// This saves you from typing std:: everywhere
using namespace std;

int main() {
    int x, y, z;

    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x << "\n";

    cout << "Type another number: ";
    cin >> y;
    cout << "Your number is: " << y << "\n";

    cout << "Type another number: ";
    cin >> z;
    cout << "Your number is: " << z << "\n";

    // Initialize the array using curly braces
    int user[3] = {x, y, z};

    // Sort array (by default in ascending order)
    sort(user, user + 3);

    cout << "Sorted numbers: ";
    for (int i : user) {
        cout << i << " ";
    }

    return 0;
}