#include <iostream>
#include <string>

class Employee
{
	private:
	std::string name;
	int salary;
	
	public:
		Employee()
		{
			name="default";
			salary=0;
		}
		
		void setName (std::string empName)
		{
			name=empName;
		}
		void setSalary (empSalary)
		{
			salary=empSalary;
		}
		void printAll()
		{
			cout<< "Name:" << name;
			cout << "Salary:" << salary;
				
		}
}
		
