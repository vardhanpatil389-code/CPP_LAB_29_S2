// To swap two numbers without using a 3rd variable
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swapNumbers(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}
