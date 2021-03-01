#include "Fraction.h"

int main() {
    Fraction num1(1, 2);
    Fraction num2(3, 5);
    Fraction num3(3, 5);
    Fraction num4 = num1 + num2;
    Fraction num5 = num1 - num2;
    Fraction num6 = num1 * num2;
    Fraction num7 = num1 / num2;
    Fraction num8;
    bool is1 = num1 == num2;
    bool is2 = num2 == num3;
    cout << "1st number is: " << num1 << endl;
    cout << "2nd number is: " << num2 << endl;
    cout << "3rd number is: " << num3 << endl;
    cout << num1 << " + " << num2 << " = " << num4 << endl;
    cout << num1 << " - " << num2 << " = " << num5 << endl;
    cout << num1 << " * " << num2 << " = " << num6 << endl;
    cout << num1 << " / " << num2 << " = " << num7 << endl;
    cout << "Is " << num1 << " equal to " << num2 << "?: " << is1 << endl;
    cout << "Is " << num2 << " equal to " << num3 << "?: " << is2 << endl;
    cin >> num8;
    cout << "8th num is: " << num8 << endl;
    return 0;
}
