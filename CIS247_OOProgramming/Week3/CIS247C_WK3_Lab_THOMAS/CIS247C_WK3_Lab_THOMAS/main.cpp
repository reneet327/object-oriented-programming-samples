// ---------------------------------------------------------------------------
//Program Header 
//Program Name:  Employee Class Development  
//Programmer:  Renee Thomas 
//CIS247, Week 3 Lab 
//Program Description:  Update Employee Class
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
		static int numEmployees;
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
		static int getNumEmployees();
		void setDependents(string dep);
		void setAnnualSalary(string sal);
		
};




int main(){

	// call function for header information
	DisplayApplicationInformation();

	//***********************Start Program************************

	// call function for divider for start program
	DisplayDivider("Start Program");

	DisplayDivider("Employee 1");

	// create default employee to set variables below

	Employee emp1;

	//set variables
	emp1.setFirstName(getInput("First Name: "));
	emp1.setLastName(getInput("Last Name: "));
	emp1.setGender(getInput("Gender: ")[0]);
	emp1.setDependents(getInput("Number of Dependents: "));
	emp1.setAnnualSalary(getInput("Annual Salary: "));
	
	// call class function to display employee information
	emp1.displayEmployee();

	

	// create new employee per iLab3 instructions passing in all the values
	Employee emp2("Mary", "Noia", 'F', 5, 24000.0);

	// call class function to display employee information
	emp2.displayEmployee();


	// call the class static function to get number of employees created
	cout<<"Number of Employees Entered: "<<Employee::getNumEmployees()<<endl;


	//***********************End Program************************

	// call function to leave program
	TerminateApplication();



// keep page open until user hits any key
cin.ignore();
return 0;
}

//***********************Class Functions************************

int Employee::numEmployees = 0;

// default constructor
Employee::Employee(){
	firstName = "Not Given";
	lastName = "Not Given";
	gender = 'U';
	dependents = 0;
	annualSalary = 20000;
	numEmployees ++;
	
}

// constructor with multi arguements
Employee::Employee(string fn, string ln, char gen, int dep, double sal)
{
	firstName = fn; 
	lastName = ln;
	gender = gen;
	dependents = dep;
	annualSalary = sal;
	numEmployees ++;
}


// create function for calculatePay
double Employee:: calculatePay(double sal){
	double wsal = sal/52;
	return wsal;
}

// create function to display all employee information
void Employee::displayEmployee()
{
	cout<<"\nEmployee Information"<<endl;
	cout<<"__________________________________________________"<<endl<<endl;
	cout<<"Employee Name: \t"<<firstName<<" "<<lastName<<endl;
	cout<<"Gender: \t"<<gender<<endl;
	cout<<"Dependents: \t"<<dependents<<endl;
	cout<<"Annual Salary: \t"<< setprecision(2) << showpoint << fixed << annualSalary<<endl;
	cout<<"Weekly Salary: \t"<< setprecision(2) << showpoint << fixed <<calculatePay(annualSalary)<<endl<<endl<<endl;
	
}

// create getters and setters for all private variables
string Employee::getFirstName(){return firstName;}
void Employee::setFirstName(string fn){firstName=fn;}
string Employee::getLastName(){return lastName;}
void Employee::setLastName(string ln){lastName=ln;}
char Employee::getGender(){return gender;}
void Employee::setGender(char gen){gender=gen;}
int Employee::getDependents(){return dependents;}
void Employee::setDependents(int dep){dependents=dep;}
void Employee::setDependents(string dep){dependents= atoi(dep.c_str());}
double Employee::getAnnualSalary(){return annualSalary;}
void Employee::setAnnualSalary(double sal){annualSalary=sal;}
void Employee::setAnnualSalary(string sal){annualSalary=atof(sal.c_str());}
int Employee::getNumEmployees(){return numEmployees;}





//***********************Non Class Functions************************
// create header function
void DisplayApplicationInformation(){
	// create header to introduce the program
	cout<<"\n--------------------------------------------"<<endl;
	cout<<"| Welcome the Basic User Interface Program    |"<<endl; 
	cout<<"| CIS247, Week 3 Lab                          |"<<endl; 
	cout<<"| Name:  RENEE THOMAS                         |"<<endl; 
	cout<<"| This program updates the employee class     |"<<endl;
	cout<<"| then outputs the data                       |"<<endl;
	
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




