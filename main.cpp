#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B" << endl;
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';
    if (a > b) {
        cout << "Max is A: " << a << '\n';
    }
    else {
        cout << "Max is B: " << b << '\n';
    }
    if (a < b) {
        cout << "Min is A: " << a << '\n';
    }
    else {
        cout << "Min is B: " << b << '\n';
    }
    return 0;
}
