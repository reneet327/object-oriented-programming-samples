// Program Header
// Program Name:  Week 1 Demo
// Programmer:  mike Velgersdyk
// CIS247, Week 1 Live Lecture
// Program Description:  This program displays time.

#include <iostream>
#include <string>

using namespace std;

// function prototypes
string getTime(string);
void displayTime(int, int, int);

//Start main
int main()
{
	//declare variables
	//hours as integer
	int hours = 0;
	//minutes as integer
	int minutes = 0;
	//seconds as integer
	int seconds = 0;
	//input as string
	string input = "";
	
	//set input = getTime("Hour: ")
	input = getTime("Hour: ");
	//set hours = convert input to integer
	hours = atoi(input.c_str());
	//set input = getTime("Minutes: ")
	input = getTime("Minutes: ");
	//set minutes = convert input to integer
	minutes = atoi(input.c_str());
	//set input = getTime("Seconds: ")
	input = getTime("Seconds: ");
	//set seconds = convert input to integer
	seconds = atoi(input.c_str());

	//call DisplayTime(hours, minutes, seconds)
	displayTime(hours, minutes, seconds);

	//exit application
	return 0;
} //end main program

//procedure getTime(string inputType)  as string
string getTime(string inputType)
{
	//strInput as string
	string strInput = "";
	//display “Enter the “ + inputType
	cout << "Enter the " << inputType;
	//get strInput
	getline(cin, strInput);
	//return strInput
	return strInput;
} //end function


//procedure DisplayTime(integer hours, integer minutes, integer seconds)
void displayTime(int hours, int minutes, int seconds)
{
	//display “The entered time is ” 
	cout << "The entered time is ";
	//display hours : minutes : seconds - separated by semicolons
	cout << hours << ":" << minutes << ":" << seconds << endl << endl;
} //end procedure
