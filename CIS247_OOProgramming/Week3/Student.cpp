#include <iostream>
#include <string>

using namespace std;


class Student
{
public:
	Student();
	Student(string, int, int);

	void setName(string);
	void setName(string, string);

	string getName();
	void setGrade(int, int);
	void getGrade(int &, int &);
	void displayStudent();

	static int getBookCount();            //Static member function

	int getStuCount(){return stuCount;}


private:
	string name;
	int grade1;
	int grade2;

	static int bookCount;    //Static data members
	static int stuCount;
};

int Student::bookCount = 0;
int Student::stuCount = 0;

int Student::getBookCount()
{
	return bookCount;
}

Student::Student()
{
	name = "";
	grade1 = 0;
	grade2 = 0;
	stuCount++;
}

Student::Student(string newName, int newGrade1, int newGrade2)
{
	name = newName;
	grade1 = newGrade1;
	grade2 = newGrade2;
	stuCount++;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setName(string firstName, string lastName)
{
	string localName = firstName + " " + lastName;
	setName(localName);
}

string Student::getName()
{
	return name;
}

void Student::setGrade(int g1, int g2)
{
	grade1 = g1;
	grade2 = g2;
}

void Student::getGrade(int &g1, int &g2)
{
	g1 = grade1;
	g2 = grade2;
}

void Student::displayStudent()
{
	cout << "The student's name is " << getName() << ". It really is." << endl;
	cout << "The student grades are " << grade1 << " and " << grade2 << endl;
}

// Function Prototypes
void DisplayApplicationInformation();
void DisplayDivider(string);
string GetInput(string);
void TerminateApplication();

int main()
{
	Student s1;
	
	
	string name = GetInput("Enter Name");
	int g1 = atoi(GetInput("Grade 1").c_str());
	Student s2(name, g1, 90);

	s1.setName("John");
	s1.setGrade(90, 99);

	


	cout << "The name for the first object is " << s1.getName() << endl;
	int localGrade1 = 0;
	int localGrade2 = 0;
	s1.getGrade(localGrade1, localGrade2);
	cout << "The grades for the first object are " << localGrade1 << " and " << localGrade2 << endl;

	s2.setGrade(100, 95);
	s2.getGrade(localGrade1, localGrade2);
	cout << "The grades for the second object are " << localGrade1 << " and " << localGrade2 << endl;

	DisplayDivider("Method Overload");

	s2.setName("Doe");
	cout << "The s2 name is " << s2.getName() << endl;
	
	s2.setName("John", "Doe");
	cout << "The s2 name is now " << s2.getName() << endl;

	

	//DisplayDivider("Book Count");
	//cout << "You can use the object name to call a static member: s1.getBookCount() = " << s1.getBookCount() << endl;
	//cout << "But it is a preference to use the class name: Student::getBookCount() = " << Student::getBookCount() << endl;


	DisplayDivider("Student Count");
	cout<<s2.getStuCount()<<endl;

	return 0;
}


void DisplayApplicationInformation()
{  
	cout<<"Welcome to your first Object Oriented Program--Employee Class"
       <<"CIS247C, Week 3 Lab"
       <<"Name: Mike Velgersdyk";       
}

void DisplayDivider(string message)
{
	cout<<"\n*************** " + message + " *********************\n";
}

string GetInput( string message)
{ 
	string mystring;
    cout<<"Please enter your "<<message;
	getline(cin, mystring);
	return mystring;
}

void TerminateApplication()
{ 
	cout<<"\nThe end of the CIS247C Week3 iLab.\n";
}