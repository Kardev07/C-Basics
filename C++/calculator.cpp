#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    string op;
    int x;
    int y;
    cout << "please enter an operator: ";
    getline(cin, op); // can use cin >> op; as well
    cout << "please enter a value for x: ";
    cin >> x;
    cout << "please enter a value for y: ";
    cin >> y;
    if (op == "+")
    {
        cout << x+y;
    }
    else if (op == "-")
    {
        cout << "the answer is " << x-y;
    }
    else if (op == "*")
    {
        cout << "the answer is " << x*y;
    }
    else if (op == "/")
    {
        cout << "the answer is " << x/y;
    }
    else if (op == "**")
    {
        cout << "the answer is " << pow(x,y);
    }
    else
    {
        cout << "invalid operator";
    }
    return 0;
}