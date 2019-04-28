#include "one.h"
#include "../DS/linked_list.h"

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void one()
{ cout << "\ndclfd src/ex_one/one.cpp/one\n";

int no_students;
string input;

int i=0;

cout << "\nEnter number of students: ";
cin >> no_students;
cout << "\n Enter names of project one by one, exit with q: \n";
string *studenti = new string[no_students];

	while(input!="q")
	{
		getline(cin, input);
		cout << input;
	}
	

	
	

}