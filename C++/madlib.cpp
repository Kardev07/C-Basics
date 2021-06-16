#include<iostream>
/*developing a basic madlib game wherein we pass the blanks as variables and ask the user for input. madlibs are a game wherein the player is given a 
pragaraph with blanks and he is asked to fill those blanks. */

using namespace std;

int main()
{
    string color, flower, question;
    cout << "please enter the name for a color: ";
    getline(cin, color);
    cout << "please enter the name of a flower: ";
    getline(cin, flower);
    cout << "please enter a question: ";
    getline(cin, question);

    cout << "Roses are " << color << ", " << flower << " are blue" << ", Hey, " << question;
    return 0;

}