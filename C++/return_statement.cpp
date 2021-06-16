#include<iostream>
#include<cmath>
using namespace std;
// this is the source code for the  return statement using a function which takes a power and a base, gives the result of that expression

int power_of_a_number(int base, int power)
{
    int result;
    result = pow(base, power);
    cout << result;
    return result;

}

int main()
{
    int base, power;
    cout << "enter value for base: ";
    cin >> base;
    cout << "enter value for power: ";
    cin >> power;
    power_of_a_number(base, power);
    return 0;
}