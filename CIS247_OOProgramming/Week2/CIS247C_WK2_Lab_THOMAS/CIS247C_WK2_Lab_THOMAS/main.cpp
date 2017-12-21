// ---------------------------------------------------------------------------
//Program Header 
//Program Name:  Employee Class 
//Programmer:  Renee Thomas 
//CIS247, Week 2 Lab 
//Program Description:  Employee Class
// ---------------------------------------------------------------------------

# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

// create prototypes for functions
void DisplayApplicationInformation();
void DisplayDivider(string);
string getInput(string);
void TerminateApplication();

// create Employee Class

class Employee{

	private:
		string firstName;
		string lastName;
		char gender;
		int dependents;
		double annualSalary;
	public:
		Employee();
		Employee(string fn, string ln, char gen, int dep, double sal); 
		double calculatePay(double sal);
		void displayEmployee();
		string getFirstName();
		void setFirstName(string fn);
		string getLastName();
		void setLastName(string ln);
		char getGender();
		void setGender(char gen);
		int getDependents();
		void setDependents(int dep);
		double getAnnualSalary();
		void setAnnualSalary(double sal);
};




int main(){

	// call function for header information
	DisplayApplicationInformation();

	//***********************Start Program************************

	// call function for divider for start program
	DisplayDivider("Start Program");

	DisplayDivider("Employee 1");

	// First Name code
	// set variable fname
	string fname;
	// set name to equal the getInput function with "fname: "
	fname = getInput("first name: ");

	//Last Name code
	// set variable lname
	string lname;
	// set name to equal the getInput function with "lname: "
	lname = getInput("last name: ");

	//Gender code
	// set variable gender
	char gender;
	// set name to equal the getInput function with "gender: "
	gender = getInput("gender: ")[0];

	//Dependents code	
	// set variable input
	string input;
	// set input to equal the getInput function with "dependents: "
	input = getInput("dependents: ");
	// set age to equal converted input to integer
	int dep = atoi(input.c_str());

	//Salary code
	
	// set input to equal the getInput function with "Annual Salary: "
	input = getInput("annual salary: ");
	// set age to equal converted input to integer
	double sal = atof(input.c_str());




	//create Employee 1 from user input above
	Employee obj1(fname, lname, gender, dep, sal);
	obj1.displayEmployee();

	//create Employee 2 by inputtinng parameters into the constuctor
	DisplayDivider("Employee 2");
	Employee obj2("Will", "Diamond", 'M', 4, 80000);
	obj2.displayEmployee();

	//***********************End Program************************

	// call function to leave program
	TerminateApplication();



// keep page open until user hits any key
cin.ignore();
return 0;
}

//***********************Class Functions************************

// default constructor
Employee::Employee(){
	firstName = "Not Given";
	lastName = "Not Given";
	gender = 'U';
	dependents = 0;
	annualSalary = 20000;
}

// constructor with multi arguements
Employee::Employee(string fn, string ln, char gen, int dep, double sal)
{
	firstName = fn; 
	lastName = ln;
	gender = gen;
	dependents = dep;
	annualSalary = sal;
}

double Employee:: calculatePay(double sal){
	double wsal = sal/52;
	return wsal;
}
void Employee::displayEmployee()
{
	cout<<"Employee Information"<<endl;
	cout<<"__________________________________________________"<<endl<<endl;
	cout<<"Employee Name: \t"<<firstName<<" "<<lastName<<endl;
	cout<<"Gender: \t"<<gender<<endl;
	cout<<"Dependents: \t"<<dependents<<endl;
	cout<<"Annual Salary: \t"<< setprecision(2) << showpoint << fixed << annualSalary<<endl;
	cout<<"Weekly Salary: \t"<< setprecision(2) << showpoint << fixed <<calculatePay(annualSalary)<<endl<<endl;
}
string Employee::getFirstName(){return firstName;}
void Employee::setFirstName(string fn){firstName=fn;}
string Employee::getLastName(){return lastName;}
void Employee::setLastName(string ln){firstName=ln;}
char Employee::getGender(){return gender;}
void Employee::setGender(char gen){gender=gen;}
int Employee::getDependents(){return dependents;}
void Employee::setDependents(int dep){dependents=dep;}
double Employee::getAnnualSalary(){return annualSalary;}
void Employee::setAnnualSalary(double sal){annualSalary=sal;}





//***********************Functions************************
// create header function
void DisplayApplicationInformation(){
	// create header to introduce the program
	cout<<"\n--------------------------------------------"<<endl;
	cout<<"| Welcome the Basic User Interface Program    |"<<endl; 
	cout<<"| CIS247, Week 2 Lab                          |"<<endl; 
	cout<<"| Name:  RENEE THOMAS                         |"<<endl; 
	cout<<"| This program creates an Employee,           |"<<endl;
	cout<<"| then outputs the data using a class         |"<<endl;
	
}

// create divider string function
void DisplayDivider(string outputTitle){
	
	cout<<"\n**************** "<<outputTitle<< " ****************"<<endl<<endl;

}

// create function to get information from user
string getInput(string inputType){
	// declare variable strInput
	string strInput;
	
	// get information from user
	cout<<"Enter your " <<inputType;
	//put user input into variable strInput
	getline(cin, strInput);

	//output user input
	return strInput;
}

// create good bye message
void TerminateApplication(){
	cout<<"\n\nThank you for running the Employee Class program."<<endl;
	cout<<"Press any key to leave the program..."<<endl;
}


