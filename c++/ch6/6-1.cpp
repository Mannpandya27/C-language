#include<iostream>
using namespace std;

class admin
{
	protected:
			
			string company_name
			int manager_salary
			int employee_salary
			int total_staff
			double total_annual_revenue
			string can_terminate
			
	public:
		
			 void setdata()
			 {
			 	cout << "Company_name: ";
			 	cin >> company_name;
			 	cout << "manager_salary: ";
			 	cin >> manager_salary;
			 	cout << "employee_salary: ";
			 	cin >> employee_salary;
			 	cout << "total_staff: ";
			 	cin >> total_staff;
			 	cout << "total_annual_revenue: ";
			 	cin >> total_annual_revenue;
			 	cout << "can_terminate: ";
			 	cin >> can_terminate;
			 	
			 }
			 
			 void getdata()
			 {
			 	cout << "Company_name\t: "          << Company_name           << endl
			 		 << "manager_salary\t: "        << manager_salary         << endl
			 		 << "employee_salary\t: "       << employee_salary        << endl
			 		 << "total_staff\t: "           << total_staff            << endl
			 		 << "total_annual_revenue\t: "  << total_annual_revenue   << endl
			 		 << "can_terminate\t: "         << can_terminate          << endl;
			 }
	
};

class manager : private admin
{
	
};

class Employee
{
	
};

int main()
{
	
};
