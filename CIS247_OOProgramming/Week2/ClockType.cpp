#include <iostream>
#include <string>

using namespace std;


class ClockType
{
public:
	ClockType();
	ClockType(int, int, int);
	~ClockType();
	void setTime(int, int, int);
	void getTime(int &, int &, int &);
	void displayTime();
private:
	int hr;
	int min;
	int sec;
	int *number;
};

ClockType::ClockType()
{
	hr = 0;
	min = 0;
	sec = 0;
	number = new int(5);
}

ClockType::ClockType(int newHour, int newMinutes, int newSeconds)
{
	hr = newHour;
	min = newMinutes;
	sec = newSeconds;
}

ClockType::~ClockType()
{
	delete number;
}

void ClockType::setTime(int newHour, int newMinutes, int newSeconds)
{
	hr = newHour;
	min = newMinutes;
	sec = newSeconds;
}

void ClockType::getTime(int &hour, int &minutes, int &seconds)
{
	hour = hr;
	minutes = min;
	seconds = sec;
}

//procedure DisplayTime(integer hours, integer minutes, integer seconds)
void ClockType::displayTime()
{
	//display “The entered time is ” 
	cout << "The entered time is ";
	//display hours : minutes : seconds - separated by semicolons
	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min < 10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec << endl << endl;
//end procedure
}


// function prototypes
string getTime(string);
void displayTime(int, int, int);

int main()
{
	// declare variables
	// hours as integer
	int hours = 0;
	// minutes as integer
	int minutes = 0;
	// seconds as integer
	int seconds = 0;
	// input as string
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

	ClockType myTime(hours, minutes, seconds);
	myTime.setTime(10, 33, 45);

	ClockType yourTime;
	yourTime.setTime(2, 4, 10);

	// values before calling getTime
	myTime.displayTime();

	myTime.getTime(hours, minutes, seconds);

	// values after calling getTime
	myTime.displayTime();


	return 0;

}

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
//end function
}

