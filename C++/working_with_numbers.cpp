#include<iostream>
#include<cmath> // used for mathematical operations

using namespace std;

int main()
{
    int base = 2;
    int power = 3;
    int square_root = 9;
    int rounding_off_number = 3.14;
    int ceiling_number = 3.14332344;
    int floor_number = 5.6666644334;
    cout << "the power is: " << pow(base, power) << endl; // returns the 1st number to the power of the 2nd number. 2^3
    cout << "the sqaure root is: " << sqrt(square_root) << endl; // returns the square root of a number
    cout << "the rounded off number is: " << round(rounding_off_number) << endl; // rounds off the number to the nearest whole number.
    cout << "the ceiling for the number is: " << ceil(ceiling_number) << endl; // rounds off the number to the preceding whole number.
    cout << "the floor for the number is: " << floor(floor_number) << endl; // rounds off the number to the successing whole number.
    cout << "the max number is: " << fmax(13213314, 234244434) << endl; // returns the max number.
    return 0;
}
