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
	cin >> n;
	string *students = new string[n];

	cout << "\nEnter number of projects: ";
	cin >> k;

	cout << "\n Enter names of project one by one: \n";
	for(int i=0;i<=n;i++)
	{
			getline(cin, input);
			students[i]=input;
	}

	for(int i=0;i<=n;i++)
	{
		cout << "\n" << students[i];
	}



	for(int i=0;i<=n;i++)
	{
			getline(cin, name_str);
			students[i]=name_str;
	}

	for(int i=0;i<=n;i++)
	{
		cout<<"Enter name:"<< name_str[i];
	}


    for(int i=0;i<=k;i++)
	{
			getline(cin, title_str);
			project[i]=title_str;
	}

    for(int i=0;i<=k;i++)
	{
		cout <<"Enter project title:"<< title_str[i];
	}

}
