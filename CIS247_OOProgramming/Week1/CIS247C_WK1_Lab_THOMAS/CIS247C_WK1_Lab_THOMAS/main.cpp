# include <iostream>
# include <string>

using namespace std;

// create prototypes for functions
void DisplayApplicationInformation();
void DisplayDivider(string);
string getInput(string);
void TerminateApplication();



int main(){

	//***********************Header************************

	// call function for header information
	DisplayApplicationInformation();

	//***********************Start Program************************

	// call function for divider for start program
	DisplayDivider("Start Program");


	//***********************Get Name************************

	// call function for divider for "Get Name"
	DisplayDivider("Get Name");
	
	// set variable name
	string name;
	// set name to equal the getInput function with "name: "
	name = getInput("name: ");
	// print out the user's name
	cout<<"Your name is "<<name<<endl;

	//***********************Get Age************************

	// call function for divider for "Get Age"
	DisplayDivider("Get Age");
	
	// set variable input
	string input;
	// set input to equal the getInput function with "age: "
	input = getInput("age: ");
	// set age to equal converted input to integer
	int age = atoi(input.c_str());
	// print out the user's age
	cout<<"Your age is "<<age<<endl;

	//***********************Get Mileage************************

	// call function for divider for "Get Mileage"
	DisplayDivider("Get Mileage");
	
		// set input to equal the getInput function with name:
	input = getInput("mileage: ");
	// set mileage to equal converted input to double (float)
	double mileage = atof(input.c_str());
	// print out the user's mileage
	cout<<"Your MPG is "<<mileage<<endl;

	//***********************End Program************************

	// call function to leave program
	TerminateApplication();




// keep page open until user hits any key
cin.ignore();
return 0;
}
//***********************Functions************************
// create header function
void DisplayApplicationInformation(){
	// create header to introduce the program
	cout<<"\n--------------------------------------------"<<endl;
	cout<<"| Welcome the Basic User Interface Program    |"<<endl; 
	cout<<"| CIS247, Week 1 Lab                          |"<<endl; 
	cout<<"| Name:  RENEE THOMAS                         |"<<endl; 
	cout<<"| This program accepts user input as a string,|"<<endl;
	cout<<"| then makes the appropriate data conversion  |"<<endl;
	
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
	cout<<"\n\nThank you for using the Basic User Interface program."<<endl;
	cout<<"Press any key to leave the program..."<<endl;
}

