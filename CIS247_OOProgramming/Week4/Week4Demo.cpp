#include <iostream>
#include <string>

using namespace std;

class Timer
{
public:
	Timer();
	Timer(int);
	void startTimer();
	void setMinutes(int);
	int getMinutes();
private:
	int minutes;
};


/****************************************
 * Timer method definitions
 ****************************************/
// Default constructor
Timer::Timer()
{
	minutes = 0;
}

// Constructor with parameters
Timer::Timer(int min)
{
	minutes = min;
}

// Function to start the timer action
void Timer::startTimer()
{
	cout << "Starting the Timer set for " << minutes << " minutes." << endl;
	int counter = 0;
	do {
		cout << counter << endl;
		counter++;
	} while(counter <= minutes);
	cout << "Recording is done!\n\n";
}

// Setter function to set the data member
void Timer::setMinutes(int min)
{
	minutes = min;
}

// Getter function to return data member
int Timer::getMinutes()
{
	return minutes;
}


// abstract class - interface
class VideoRecorder
{
public:
	virtual void startRecording(int)=0;   // pure virtual function
};


class DigitalVideoRecorder : public VideoRecorder
{
public:
	DigitalVideoRecorder();
	DigitalVideoRecorder(string, int);
	void setTitle(string);
	string getTitle();
	void setVideoTimer(int);
	void startRecording(int);
private:
	string showTitle;
	Timer videoTimer;   // composite object
};

// Default constructor
DigitalVideoRecorder::DigitalVideoRecorder()
{ 
	showTitle = "";
}

DigitalVideoRecorder::DigitalVideoRecorder(string title, int min) : videoTimer(min)
{
	showTitle = title;
}

void DigitalVideoRecorder::setTitle(string newTitle)
{
	showTitle = newTitle;
}

string DigitalVideoRecorder::getTitle()
{
	return showTitle;
}

// Function to start recording action
void DigitalVideoRecorder::startRecording(int min)
{
	cout << "Starting the video recording." << endl;
	videoTimer.setMinutes(min);
	videoTimer.startTimer();
}

// Setter function to pass 'minutes' to Timer object
void DigitalVideoRecorder::setVideoTimer(int min)
{
	videoTimer.setMinutes(min);
}


int main()
{
	DigitalVideoRecorder myDVR("Fringe", 120);
	myDVR.setVideoTimer(180);
	myDVR.startRecording(240);

	return 0;
}