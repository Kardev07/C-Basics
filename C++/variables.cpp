#include<iostream>
// hey! this file is about different types of variables in C++. 
/* hey! and one more thing.both double and float datatypes hold decimal
values but the difference between them is the amount of memory each one
can hold. double can hold more whereas float less. */
using namespace std;
int main()
{
	string char_name="James Bond";
	int char_age=51;
	char my_grade = 'O';
	float float_cgpa = 3.8;
	double double_cgpa = 3.8;
	bool exam_passed = true;
	
	cout << "My name is Bond, " << char_name << "." << endl;
	
	cout << "And I am " << char_age << " years old." << endl;
	
	cout << "my grade is " << my_grade << endl;
	
	cout << "my cgpa in float datatype is " << float_cgpa << endl;
	
	cout << "my cgpa in double datatype is " << double_cgpa << endl; 
	
	cout << "it is true " << exam_passed << " that i passed my exam" << endl;
	
	return 0;
}
