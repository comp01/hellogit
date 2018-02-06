#include <iostream>
#include <vector>
#include "employee.h"

using namespace std;

intmain( )
{
	vector <Employee> staff;
	string empName;
	int salary;
	
	for (i=0;i<4;i++)
	{
		cout << "Enter employee name";
		cin >> empName;
		cout << "Enter employee's wage";
		cin >> salary;
		
		Employee profile;
		
		profile.setName(empName);
		profile.setSalary(salary);
		staff.push_back(profile);
		
	}
	
	for (int=0;i<staff.size();i++)
	{
		staff[i].printAll();
	}

}
