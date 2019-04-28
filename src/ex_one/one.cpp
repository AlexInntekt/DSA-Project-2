#include "one.h"
#include "../DS/linked_list.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void one()
{ cout << "\ndclfd src/ex_one/one.cpp/one\n";

string input;

int i=0;

// cout << "\nEnter number of students: ";
// cin >> no_students;

cout << "\n Enter names of project one by one, exit with q: \n";
vector<string> students;

	while(input!="q")
	{
		getline(cin, input);
		if(input!="q"){students.push_back(input);}
	}
	

}