#include<iostream>
using namespace std;
// here is the code for if statements in c++.
int main()
{
    int my_marks;
    cout << "enter marks: ";
    cin >> my_marks;
    if (90 <= my_marks)
    {
        cout << "grade is 0";
    }
    else if ((50 <= my_marks) && ( 80 >= my_marks))
    {
        cout << "grade is A";
    }
    else
    {
        cout << "sorry, you failed";
    }
    return 0;
}