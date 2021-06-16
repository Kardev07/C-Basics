#include<iostream>

using namespace std;

int main()
{
    string Name;
    double id;
    cout << "kindly enter your name: ";
    getline(cin, Name);
    cout << "kindly enter your id: " ;
    cin >> id;
    cout << "Your " << Name << " and your ID is 00" << id;
    return 0;

}
