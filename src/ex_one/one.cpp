#include "one.h"
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
	Student *students = new Student[n];

	cout << "\nEnter number of projects: ";
	cin >> k; k++;
	Project *projects = new Project[k];

	cout << "\n Enter names of students one by one: \n";
	for(int i=0;i<n;i++)
	{
		getline(cin, input);

		Student * current = new Student;
				  current->name=input;
		students[i]=*current;
	}

	cout << "\n Enter names of projects one by one: \n";
	for(int i=0;i<n;i++)
	{
		getline(cin, input);

		Project * current = new Project;
				  current->title=input;
		projects[i]=*current;
	}



   for(int i=0; i<n; i++)
   {
   		for(int j=0; j<k; j++)
   		{
   			cout << students[i].name << " " << projects[j].title << "\n";
   		}
   }

	// backtrack(students[0].no, students, projects[0].no, projects);
}



void backtrack(int n, Student students[], int k, Project projects[])
{


	
}