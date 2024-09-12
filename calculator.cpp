/**
* Name: Akhil Yeduvaka
* Program Name: Make a Calculator
* Date: 9/12/24
* Extra: Inverse of same operations
*/


#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    double num3 = 0; //double used for rounding
    cout << "Give me a number: ";
    cin >> num1;
    cout << "Give me another number: ";
    cin >> num2;
    cout << "Give me one last number with as many decimal positions as you want: ";
    cin >> num3;
    cout << "\nSum: " << num1 + num2;
    cout << "\nDifference: " << num1 - num2;
    cout << "\nDifference #2: " << num2 - num1;
    cout << "\nMultiplication: " << num1 * num2;
    cout << "\nDivision: " << num1 / num2;
    cout << "\nDivision #2: " << num2 / num1; //does the inverse of previous statement
    cout << "\nModulus: " << num1 % num2;
    cout << "\nModulus: " << num1 % num2;
    cout << "\nIncrement: " << ++num1;
    cout << "\nDecrement: " << --num2;
    num3 = ((num3 * 100.00) + 0.5)/100.00; // multiplies by 100, then adds 0.5 to it, then turns it into an int, then divides by 100
    cout << "\nChallenge: " << num3 << endl;
}
