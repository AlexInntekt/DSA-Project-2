#include <iostream>
#include <string>

using namespace std;

class Project
{
private:
   static int no;
   int its_id;

public:
   Project();
   string title;
   int get_id();

};