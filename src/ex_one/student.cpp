#include "student.h"

using namespace std;

int Student::no = 0;
Student::Student()
{
	its_id = ++no;
}
int Student::get_id()
{
   return its_id;
}
