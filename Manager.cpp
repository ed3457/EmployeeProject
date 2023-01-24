#include "Manager.h"

void Manager::setDepartment(string d)
{
    department = d; 
}

string Manager::getDepartment()
{
    return department;
}

Manager::Manager():Employee()
{
    setDepartment("not set yet");

}

Manager::Manager(string n, string p, string a, float s, string d):Employee(n,p,a,s)
{
    setDepartment(d);
}
