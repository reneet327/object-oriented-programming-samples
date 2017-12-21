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
	Person(string, string, string);
	void getName(string &, string &, string &);
	virtual void displayName()=0;
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

Person::Person(string inFirst, string inMiddle, string inLast)
{
	firstName = inFirst;
	middleName = inMiddle;
	lastName = inLast;
}

void Person::getName(string &outFirst, string &outMiddle, string &outLast)
{
	outFirst = firstName;
	outMiddle = middleName;
	outLast = lastName;
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
	hireDate = "NOT_SET";
}

Employee::Employee(string inFirst, string inMiddle, string inLast, string hrDate) : Person(inFirst, inMiddle, inLast)
{
	hireDate = hrDate;
}

void Employee::displayName()
{
	string tmpString;
	string fName = "";
	string mName = "";
	string lName = "";
	getName(fName, mName, lName);
	cout << "Employee: " << fName << " " << mName << " " << lName << endl;
	cout << "Hire date: " << hireDate << endl;
}



/*****************************
 * main
 *****************************/
int main()
{
	cout << "=== Person Class Test ===\n\n";

	string firstName = "Drew";
	string middleName = "C";
	string lastName = "Brees";

	//Person drew(firstName, middleName, lastName);  

	//drew.displayName();

	// declare local variables
	string employeeFirstName = "John";
	string employeeMiddleName = "W";
	string employeeLastName = "Brees";

	// instantiate derived class object
	Employee employee1(employeeFirstName, employeeMiddleName, employeeLastName, "10/12/2007");

	// invoke derived class method
	employee1.displayName();

	cout << endl << endl;


	return 0;
}

