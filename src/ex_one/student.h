#include <string.h>

class Student
{
public:
  string name;
  int ID;
  static int current_ID;

  Student():ID(current_ID++) {}
};


