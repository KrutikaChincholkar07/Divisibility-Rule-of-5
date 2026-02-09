#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int lastDigit = num % 10;

    if (lastDigit == 0 || lastDigit == 5)
        cout << num << " is divisible by 5";
    else
        cout << num << " is not divisible by 5";

    return 0;
}
