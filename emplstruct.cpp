#include <iostream>
#include <string>
using namespace std;
struct employee {
  string name;
    int age;
  string designation;
    float salary;
};

int main() {
    const int numEmployees = 3; // Number of employees
    employee employees[numEmployees]; // Array of employee objects

    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
      cout << "Enter details for employee " << i+1 << ":" << std::endl;
      cout << "Name: ";
      getline(std::cin >> std::ws, employees[i].name);
      cout << "Age: ";
      cin >> employees[i].age;
      cout << "Designation: ";
      getline(std::cin >> std::ws, employees[i].designation);
      cout << "Salary: ";
      cin >> employees[i].salary;
      cout << std::endl;
    }

    // Print employee details
  cout << "Employee Details:" << std::endl;
    for (int i = 0; i < numEmployees; i++) {
      cout << "Employee " << i+1 << ":" << std::endl;
      cout << "Name: " << employees[i].name << std::endl;
      cout << "Age: " << employees[i].age << std::endl;
      cout << "Designation: " << employees[i].designation << std::endl;
      cout << "Salary: " << employees[i].salary << std::endl;
      cout << std::endl;
    }

    return 0;
}