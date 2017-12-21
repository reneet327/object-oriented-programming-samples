#include <iostream>
#include <string>

using namespace std;

/*****************************
 * Person class definition
 *****************************/
class Person
{
public:
	Person();
	~Person();
	Person(string, string, string);
	virtual void displayName();  
private:
	string firstName;
	string middleName;
	string lastName;
};

/*****************************
 * Person method definitions
 *****************************/
Person::Person()
{
	firstName = "";
	middleName = "";
	lastName = "";
}

Person::~Person()
{ }

Person::Person(string inFirst, string inMiddle, string inLast)
{
	firstName = inFirst;
	middleName = inMiddle;
	lastName = inLast;
}

void Person::displayName()
{
   string tmpString;

   tmpString = firstName + " ";
   if (middleName != "")
	   tmpString = tmpString + middleName + " ";
   tmpString = tmpString + lastName;

   cout << endl << tmpString << endl;
}



/*****************************
 * Person class definition
 *****************************/
class Employee : public Person
{
public:
	Employee();
	Employee(string, string, string, string);
	void displayName();
private:
	string hireDate;
};


/*****************************
 * Person method definitions
 *****************************/
Employee::Employee() : Person() 
{ 
	hireDate = "";
}

Employee::Employee(string inFirst, string inMiddle, string inLast, string hrDate) : Person(inFirst, inMiddle, inLast)
{
	hireDate = hrDate;
}

void Employee::displayName()
{
	string tmpString;
	cout << "Employee: ";
	Person::displayName();
	cout << "Hire date: " << hireDate << endl;
}


// Standalone function to display the object information
void produceOutput(Person &in)
{
	in.displayName();
}


/*****************************
 * main
 *****************************/
int main()
{
	cout << "=== Base Class Test ===\n\n";

	// declare local variables
	string firstName = "Drew";
	string middleName = "C";
	string lastName = "Brees";

	// instantiate base class object
	Person drew(firstName, middleName, lastName);

	// invoke base class method
	produceOutput(drew);

	cout << "\n\n\n=== Derived Class Test ===\n\n";

	// declare local variables
	string employeeFirstName = "John";
	string employeeMiddleName = "W";
	string employeeLastName = "Brees";

	// instantiate derived class object
	Employee employee1(employeeFirstName, employeeMiddleName, employeeLastName, "10/12/2007");

	// invoke derived class method?
	produceOutput(employee1);

	cout << endl << endl;

	return 0;
}

