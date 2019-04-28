#include "one.h"
#include "../DS/linked_list.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void one()
{ cout << "\ndclfd src/ex_one/one.cpp/one\n";

	string input;
	int n; //number of students
	int k; //number of projects
    string name_str; //student name
    string title_str; //project title
    string project;

	cout << "\nEnter number of students: ";
	cin >> n; n++;
	string *students = new string[n];

	cout << "\nEnter number of projects: ";
	cin >> k; k++;

	cout << "\n Enter names of project one by one: \n";
	for(int i=0;i<n;i++)
	{
			getline(cin, input);
			students[i]=input;
	}


	for(int i=0;i<n;i++)
	{
		cout << "\n" << students[i];
	}


}
