#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
   static int no;
   int its_id;

public:
   Student();
   string name;
   int get_id();

};