#include "project.h"

using namespace std;

int project::no = 0;
Project::Project()
{
	its_id = ++no;
}
int Project::get_id()
{
   return its_id;
}
