#include<iostream>

using namespace std;
// function 1
void add_num(int, int);
void sub_num(int, int);
void mul_num(int, int);
void greet(string);

int main()
{
    string user;
    cout << "please enter your name: ";
    getline(cin, user);
    int num_1, num_2;
    cout << "enter value for num_1: ";
    cin >> num_1;
    cout << "enter value for num_2: ";
    cin >> num_2;
    greet(user);
    add_num(num_1, num_2);
    sub_num(num_1, num_2);
    mul_num(num_1, num_2);
    return 0;
}

void greet(string user)
{
    cout << "Welcome " << user << " sir" << endl;
}

void add_num(int num_1, int num_2)
{
    cout << "the sum is " << num_1 + num_2 << endl;
}

void sub_num(int num_1, int num_2)
{
    cout << "the difference is " << num_1 - num_2 << endl;
}

void mul_num(int num_1, int num_2)
{
    cout << "the product is " << num_1 * num_2 << endl;
}